#include <iostream>
#include <vector>
using namespace std;
int main() {
	int cnt; cin >> cnt;
	vector<pair<int, int>> v(cnt);
	for (auto& p : v) cin >> p.first >> p.second;
	for (auto p : v) cout << p.first << ' ' << p.second << endl;
}
