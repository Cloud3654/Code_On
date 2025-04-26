#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct SHOP {
    string name;
    double sco;
};

vector<SHOP> shop;
map<double, int, greater<double>> score;

int main() {
    int fc;  cin >> fc;
    shop.resize(fc);

    for(auto &p : shop) {
        cin >> p.name >> p.sco;
        score[p.sco];
    }

    int rk = 1;
    for(auto &p : score)  p.second = rk++;

    for(auto &p : shop)
        cout << p.name << ' ' << score[p.sco] << endl;
}
