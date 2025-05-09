#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
	bool isP = false;
	double n = sqrt(num);
	for (int i = 2; i <= n; i++) {
		isP = !(num % i);
		if (isP) return false;
	}
	return true;
}
int main() {
	int n; cin >> n;
	if (isPrime(n)) printf("%d 는(은) 소수입니다.", n);
	else printf("%d 는(은) 소수가 아닙니다.", n);
}
