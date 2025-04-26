#include <iostream>
using namespace std;

int no, a;

int main() {
    cin >> no >> a;
    int c[no + 1];
    c[1] = a, c[2] = a;
    for (int i = 3; i <= no; i++) {
        c[i] = c[i - 1] + c[i - 2];
        if (c[i] >= 30) c[i] = 1;
    }
    cout << c[no];
}
