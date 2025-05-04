#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int div_sum(int n) {
    int s = floor(sqrt(n));
    int sum = n - (n * 2);
    for (int i = 1; i <= s; i++) {
        if (n % i == 0) sum += (i + ((i * i != n) ? (n / i) : 0));
    }
    return sum;
}
int main() {
    int cnt; cin >> cnt;
    vector<int> num(cnt);
    for (auto& p : num) cin >> p;
    int pc = 0, oc = 0;
    for (auto p : num) {
        if (div_sum(p) == p) cout << p << ' ', pc++;
        else if (div_sum(p) > p) oc++;
    }
    cout << endl << pc << ' ' << oc;
}
