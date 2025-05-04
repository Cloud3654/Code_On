#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char apb[26];
    for (int i = 23; i < 26; i++) apb[i] = 'a' + (25 - i);
    for (int i = 0; i < 23; i++) apb[i] = 'd' + i;
    string s; getline(cin, s);
    for (auto& k : s) k = tolower(k);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 97 && s[i] <= 123) cout << apb[s[i] - 97];
        else cout << s[i];
    }
}
