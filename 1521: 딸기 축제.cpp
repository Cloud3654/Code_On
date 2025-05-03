#include <iostream>
using namespace std;
int main() {
	int cnt, cost; cin >> cnt;
	cost = ((cnt / 3 * 2) + (cnt % 3)) * 7000;
	cout << ((cnt >= 7) ? "과태료 대상입니다. " : "맛있게 드세요. ") << ((cnt >= 7) ? cnt * 140000 : cost) << "원입니다.";
}
