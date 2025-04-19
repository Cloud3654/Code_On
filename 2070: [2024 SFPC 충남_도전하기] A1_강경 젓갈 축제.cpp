#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int n, m, o;
map<float, int, greater<float>> sl, rl;
struct SCORE {
    string name;
    vector<int> sc;
    int no;
    float ave;
    void input(int oc) {
        cin >> name;
        sc.resize(m);
        for (auto &k : sc) cin >> k;
        sort(sc.begin(), sc.end());
        while (oc--) sc.erase(sc.begin()), sc.pop_back();
        ave = accumulate(sc.begin(), sc.end(), 0.0) / sc.size();
        ave = round(ave * 10.0) / 10.0;
        sl[ave]++;
    }
};

vector<SCORE> score;

int main()
{
    cin >> n >> m >> o;
    score.resize(n);
    for (auto &i : score) i.input(o);
    int rn = 1;
    for (auto &j : sl) {
        int tmp = j.second;
        j.second = rn;
        rn += tmp;
    }
    for (auto j : score) {
        printf("%d %s %.1f\n", sl[j.ave], j.name.c_str(), j.ave);
    }
}
