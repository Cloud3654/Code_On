#include <iostream>
#include <stdio.h>
using namespace std;
int ucl(int a, int b) {
	if (a % b == 0) return b;
	else ucl(b, a % b);
}
int main() {
	int a, b; cin >> a >> b;
	if (b > a) swap(a, b);
	cout << ucl(a, b);
}
