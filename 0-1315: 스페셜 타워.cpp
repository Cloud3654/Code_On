#include <iostream>
#include <vector>
using namespace std;
int main() {
	int cnt; cin >> cnt;
	vector<int> v(cnt);
	for (auto& p : v) cin >> p;
	int sp = 0;
	for (int i = 1; i < cnt - 1; i++) {
		cout << *max_element(&v[0], &v[i - 1]) << ' ' << v[i] << ' ' << *min_element(&v[i + 1], &v[cnt - 1]);
		cout << ' ' << (*max_element(&v[0], &v[i - 1]) < v[i] && *min_element(&v[i + 1], &v[cnt - 1]) > v[i]) << endl;
		if (*max_element(&v[0], &v[i - 1]) < v[i] && *min_element(&v[i + 1], &v[cnt - 1]) > v[i]) sp++;
	}
	cout << sp;
}
