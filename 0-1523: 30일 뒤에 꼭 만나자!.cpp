#include <iostream>
using namespace std;
int main() {
	int thirtyone[13] = { 0, 30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int y, m, d; cin >> y >> m >> d;
	d += 30;
	if (d > thirtyone[m]) d -= thirtyone[m], m++;
	if (m > 12) m -= 12; y++;
	printf("%d년 %d월 %d일", y, m, d);
}
