#include <iostream>
using namespace std;
int main() {
    int st = 1, mst = 0;
    int arr[10];
    for (auto& k : arr) cin >> k;
    for (int i = 1; i < 10; i++) {
        if (arr[i] - arr[i - 1] == 1) st++;
        else {
            if (st > mst) mst = st;
            st = 1;
        }
    }
    if (st > mst) mst = st;
    cout << mst;
}
