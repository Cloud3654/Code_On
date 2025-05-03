#include <iostream>
using namespace std;
int main() {
	int pc, nm = 0, n = 1; cin >> pc;
	while (pc > 0) { pc -= 2 - (n % 2), nm += 1000, n++; }
	cout << nm;
}
