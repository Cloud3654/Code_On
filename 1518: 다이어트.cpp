#include <iostream>
using namespace std;
int main() {
	int d, j, f; cin >> d >> j >> f;
	printf("%.1fcal %.1fkg", (d + j + f) * 66.6, (d + j + f) * 66.6 / 9000.0);
}
