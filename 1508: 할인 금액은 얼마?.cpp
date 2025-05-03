#include <iostream>
using namespace std;
int main() {
	int c, dr; cin >> c >> dr;
	cout << (1000 * c) * (1 - (dr / 100.0));
}
