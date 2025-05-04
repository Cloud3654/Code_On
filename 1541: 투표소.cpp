#include <iostream>
#include <vector>
using namespace std;
int main() {
    int cnt, sum = 0; cin >> cnt;
    vector<int> num(cnt);
    for (auto& p : num) cin >> p;
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j <= i; j++) {
            sum += num[j];
        }
    }
    cout << sum - 2;
}
