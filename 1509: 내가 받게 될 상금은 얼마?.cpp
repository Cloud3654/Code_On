#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	if (a + b + c == 100) printf("%d %d %d", a * 1000, b * 1000, c * 1000);
	else cout << "Incorrect";
}
