#include <iostream>
using namespace std;
int main() {
	int ay, am, ad, by, bm, bd; cin >> ay >> am >> ad >> by >> bm >> bd;
	int age = ay - by; if (100 * am + ad < 100 * bm + bd) age--;
	cout << age;
}
