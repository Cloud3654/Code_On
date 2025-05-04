#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isEven(int n) {
    return n % 2 == 0;
}
int main() {
    int cnt; cin >> cnt;
    vector<int> numbers(cnt);
    for (auto& k : numbers) cin >> k;
    numbers.erase(remove_if(numbers.begin(), numbers.end(), isEven), numbers.end());
    cout << numbers.size() << endl;
    for (auto k : numbers) cout << k << ' ';
}
//C++ 20 이상일 시
//numbers.erase(remove_if(numbers.begin(), numbers.end(), isEven), numbers.end()); -> erase_if(numbers, isEven);
