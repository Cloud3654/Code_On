#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v;
	int n; cin >> n;
	while (n) {
		v.push_back(n);
		cin >> n;
	}
	sort(v.begin(), v.end());
	cout << '[';
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i < v.size() - 1) cout << ", ";
	}
	cout << ']';
}
