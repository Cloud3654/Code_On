#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
    int cnt; cin >> cnt;
    vector<int> score(cnt);
    for (auto& k : score) cin >> k;
    sort(score.begin(), score.end());
    printf("%.2f", accumulate(score.begin() + 1, score.end() - 1, 0) / (cnt - 2.0));
}
//문제 오류:
//문제에서 소수점 2자리까지 출력하라고 했지만
//1번 케이스의 정답이 5.5로 소수점 1자리임
