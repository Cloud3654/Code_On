#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) cout << "0 ";
		for (int i = 0; i < n; i++) cout << "1 ";
		for (int i = 0; i < n; i++) cout << "0 ";
		cout << endl;
	}
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) cout << "1 ";
		for (int i = 0; i < n; i++) cout << "0 ";
		for (int i = 0; i < n; i++) cout << "1 ";
		cout << endl;
	}
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) cout << "0 ";
		for (int i = 0; i < n; i++) cout << "1 ";
		for (int i = 0; i < n; i++) cout << "0 ";
		cout << endl;
	}
}
