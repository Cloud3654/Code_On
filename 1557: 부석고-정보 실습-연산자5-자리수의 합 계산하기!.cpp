#include <iostream>
using namespace std;
int main() {
	int n, sum = 0; cin >> n;
	sum += n / 10000; n %= 10000;
	sum += n / 1000; n %= 1000;
	sum += n / 100; n %= 100;
	sum += n / 10; n %= 10;
	cout << sum + n;
}
