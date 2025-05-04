#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int m, p; cin >> m;
    double t = m / 60.0;
    if (t > 24) p = 20000;
    else p = ceil(t) * 1000;
    cout << "이용 요금은 " << p << "원 입니다.";
}
