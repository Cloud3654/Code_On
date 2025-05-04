#include <iostream>
#include <vector>
using namespace std;
int w, h;
void tbline() {
    cout << '+';
    for (int i = 0; i < w - 2; i++) cout << '-';
    cout << '+' << endl;
}
void midline() {
    cout << '|';
    for (int i = 0; i < w - 2; i++) cout << ' ';
    cout << '|' << endl;;
}
int main() {
    cin >> w >> h; h -= 2;
    tbline();
    while (h--) midline();
    tbline();
}
