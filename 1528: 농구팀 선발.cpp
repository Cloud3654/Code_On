#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> score(6);
    for (auto& p : score) cin >> p;
    sort(score.begin(), score.end(), greater<int>());
    for (int i = 0; i < 5; i++) cout << score[i] << " ";
}
