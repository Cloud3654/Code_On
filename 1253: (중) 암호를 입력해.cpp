#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	cout << "숫자를 삭제한 문자는 : ";
	for (auto c : s) {
		if (!(c >= 48 && c <= 57)) cout << c;
	}
	cout << " 입니다.";
}
