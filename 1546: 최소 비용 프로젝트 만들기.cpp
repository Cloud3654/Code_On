#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int fc, co = 0; cin >> fc;
	vector<int> f(fc);
	while (fc--) cin >> f[fc];
	while (f.size() > 1) {
		sort(f.begin(), f.end());
		co += f[0] + f[1];
		f.push_back(f[0] + f[1]);
		f.erase(f.begin()); f.erase(f.begin());
	}
	cout << co;
}
