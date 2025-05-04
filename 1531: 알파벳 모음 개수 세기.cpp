#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string mm = "aeiou";
    string s; getline(cin, s);
    int cnt = 0;
    for (auto k : s) if(mm.find(tolower(k)) != string::npos) cnt++;
    cout << cnt;
}
