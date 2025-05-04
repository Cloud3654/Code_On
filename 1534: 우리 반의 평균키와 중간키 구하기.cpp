#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;
int main() {
    int cnt; cin >> cnt;
    vector<int> hei(cnt);
    for (auto& p : hei) cin >> p;
    sort(hei.begin(), hei.end());
    cout << floor((accumulate(hei.begin(), hei.end(), 0.0) / cnt)) << endl;
    if (cnt % 2) cout << hei[floor(cnt / 2.0)];
    else cout << floor((hei[cnt / 2] + hei[cnt / 2 - 1]) / 2.0);
}
