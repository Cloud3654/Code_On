#include <iostream>
using namespace std;
int h, m;
void calc() {
    m += 5;
    if (m >= 60) h++, m -= 60;
    if (h >= 24) h = 0;
}
int main() {
    cin >> h >> m;
    for (int i = 0; i < 3; i++) {
        printf("%02d %02d\n", h, m); calc();
    }
}
