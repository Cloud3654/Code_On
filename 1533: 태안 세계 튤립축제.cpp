#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    cout << (n / 15) + (n % 15 > 0);
}
