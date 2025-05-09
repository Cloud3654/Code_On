#include <iostream>
using namespace std;
int main() {
	cout << "*** 5단을 뒤에서부터 출력하기 ***\n";
	for (int i = 9; i >= 1; i--) {
		printf("5 * %d = %d\n", i, 5 * i);
	}
}
