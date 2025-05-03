#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> v; v.resize(5);
	for (auto& p : v) cin >> p;
	sort(v.begin(), v.end());
	for (int i = 0; i < 5; i++) {
		cout << v[i];
		if (i != 4) cout << "->";
	}
}
