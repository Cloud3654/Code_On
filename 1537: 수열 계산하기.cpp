#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    if (!(n % 2)) cout << (n / 2) - n;
    else cout << ((n - 1) / 2) + 1;
}
