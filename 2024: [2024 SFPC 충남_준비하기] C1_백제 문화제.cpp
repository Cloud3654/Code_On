#include <iostream>
using namespace std;

int main() {
    int c, mx, cnt = 0; cin >> c >> mx;
    int ss = 0;
    for (int k; c--;) {
        cin >> k;
        if (ss + k > mx) { ss = k; cnt++; }
        else ss += k;
    }
    cnt += (ss > 0);

    cout << cnt;
}
