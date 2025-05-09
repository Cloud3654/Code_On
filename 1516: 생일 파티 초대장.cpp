#include <iostream>
using namespace std;
int main() {
	int n, t = 0;
	while (true) {
		t++;
		cin >> n;
		if (n <= 9 && n % 2 == 1) { cout << "True";  break; }
		else if (t == 5) { cout << "False";  break; }
	}
}
