#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	int cnt; cin >> cnt;
	vector<int> tomato; tomato.resize(cnt);
	int a = 0, b = 0, c = 0;
	for (int i = 0, n; i < cnt; i++) {
		cin >> n;
		n >= 300 ? a++ : (n >= 200 ? b++ : c++);
	}
	printf("A(%d) B(%d) C(%d)\n", a, b, c);
	cout << "A"; while (a--) cout << " *"; cout << endl;
	cout << "B"; while (b--) cout << " *"; cout << endl;
	cout << "C"; while (c--) cout << " *"; cout << endl;
}
