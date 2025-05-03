#include <iostream>
using namespace std;
int main() {
	int sh, sm, m; cin >> sh >> sm >> m;
	sm += m, sh += sm / 60, sm %= 60;
	sh %= 24;
	cout << sh << " " << sm;
}
