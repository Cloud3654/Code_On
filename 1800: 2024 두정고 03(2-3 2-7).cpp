#include <iostream>
using namespace std;
int main() {
	int sales[] = { 80, 95, 100, 120, 150, 200, 250, 220, 180, 160, 140, 110 };
	int cnt = 0, sum = 0;
	for (auto p : sales) {
		if (p >= 150) cnt++, sum += p;
	}
	cout << cnt << endl << sum;
}
