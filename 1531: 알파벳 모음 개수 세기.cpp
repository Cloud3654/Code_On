#include <iostream>
using namespace std;
int main() {
    string mm = "aeiouAEIOU";
    string s; getline(cin, s);
    int cnt;
    for (auto k : s) if(mm.find(k) != string::npos) cnt++;
    cout << cnt;
}
