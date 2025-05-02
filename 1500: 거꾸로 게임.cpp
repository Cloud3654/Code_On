#include <iostream>
#include <string>
using namespace std;
int main() {
    string a; cin >> a;
    int b = a.length();
    while (b--) cout << a[b];
}
