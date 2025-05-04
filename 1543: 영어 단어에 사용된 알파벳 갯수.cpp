#include <iostream>
#include <map>
using namespace std;
int main() {
    string s; cin >> s;
    map<char, int> c;
    for (auto k : s) {
        if (c.find(k)->first != string::npos) c[k]++;
        else c[k];
    }
    for (auto it = c.begin(); it != c.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }
}
