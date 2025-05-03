#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<string> name;
	string s;
	while (true) {
		getline(cin, s);
		if (s == "끝") break;
		name.push_back(s);
	}
	printf("%d등 %s\n", name.size() - 1, name[name.size() - 2].c_str());
	printf("%d등 %s", name.size(), name[name.size() - 1].c_str());
}
