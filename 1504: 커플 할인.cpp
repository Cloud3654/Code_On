#include <iostream>
using namespace std;
int main() {
    string s; cin >> s;
    int pos = s.find("+");
    int a = stoi(s.substr(0, pos));
    int b = stoi(s.substr(pos + 1, s.size() - 1));
    cout << ((a + b) % 44 == 0 ? "Congratulation!" : "Sorry.");
}
