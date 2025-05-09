#include <iostream>
using namespace std;
int main() {
	int m, m50000, m10000, m5000, m1000; cin >> m;
	m50000 = m / 50000; m %= 50000;
	m10000 = m / 10000; m %= 10000;
	m5000 = m / 5000; m %= 5000;
	m1000 = m / 1000;
	printf("%d %d %d %d", m50000, m10000, m5000, m1000);
}
