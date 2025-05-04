#include <iostream>
using namespace std;
int main() {
    int st = 1, mst = 0;
    int cnt; cin >> cnt;
    string s; cin >> s;
    char arr[cnt];
    for (int i = 0; i < cnt; i++) arr[i] = s[i];
    for (int i = 1; i < cnt; i++) {
        if (arr[i] == arr[i - 1]) st++;
        else {
            if (st > mst) mst = st;
            st = 1;
        }
    }
    if (st > mst) mst = st;
    cout << mst;
}
