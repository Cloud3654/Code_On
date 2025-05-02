#include <iostream>
using namespace std;
int main() {
	int m, p; cin >> m >> p;
	m -= p;
	cout << m / 500 << " "; m %= 500;
	cout << m / 100 << " "; m %= 100;
	cout << m / 50 << " "; m %= 50;
	cout << m / 10 << " ";
}
