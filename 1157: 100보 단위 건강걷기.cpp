#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	b -= a;
	cout << (b <= 0 ? 0 : (b / 100 + (b % 100 != 0)));
}
