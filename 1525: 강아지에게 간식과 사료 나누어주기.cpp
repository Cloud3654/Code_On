#include <iostream>
using namespace std;
int ucl(int a, int b) {
    if (b % a == 0) return a;
    return ucl(b, a % b);
}
int main() {
    int a, b; cin >> a >> b;
    int gcd = ucl(a, b);
    printf("강아지마다 간식은 %d개씩, 사료는 %d개씩 나눠줄 수 있습니다.\n", a / gcd, b / gcd);
    printf("최대 %d마리의 강아지에게 나눠줄 수 있습니다.", gcd);
}
