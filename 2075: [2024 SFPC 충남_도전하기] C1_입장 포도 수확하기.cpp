#include <iostream>
#include <set>
using namespace std;

int gtc, mgcib, ubc; //grape tree count, max grape count in box, usable box count
int sgc; //sell grape count
multiset<int, greater<int>> gt; //grape tree
void prt() {
    for (auto i : gt) {
        cout << i << " ";
    }
    cout << ": " << sgc << " : " << ubc << endl;
}
int main() {
    cin >> gtc >> mgcib >> ubc;
    int n;
    while (gtc--) {
        cin >> n;
        gt.insert(n);
    }
    n = 0;
    auto it = gt.begin();
    while (true) {
        it = gt.begin();
        if (ubc <= 0) break;
        if (*it >= mgcib) {
            sgc += *it / mgcib * mgcib;
            ubc -= *it / mgcib;
            if (ubc <= 0) sgc -= (0 - ubc) * mgcib;
            gt.erase(it);
            gt.insert(*it % mgcib);
        }
        else {
            sgc += *it;
            ubc--;
            gt.erase(it);
        }
        prt();
    }
    cout << sgc;
}
