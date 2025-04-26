#include <iostream>
using namespace std;

int hc, m;

int main() {
    cin >> hc >> m;
    int hp;
    for (int i = 0; i < hc; i++) {
        cin >> hp;
        m -= hp;
    }
    cout << (m <= 0 ? -1 : m);
}
