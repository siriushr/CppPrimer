#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	string str, pre, maxStr;
	int cnt = 1, maxCnt = 0;

	cout << "请输入单词，以空格分隔:\n";
	while (cin >> str) {
		if (str == pre) {
			cnt++;
		} else {
			cnt = 1;
		} 

		if (cnt > maxCnt) {
			maxCnt = cnt; 
			maxStr = str;
		}
		pre = str;
	}
	if (maxCnt) 
		cout << maxStr << "一共出现了" << maxCnt << "次"<< endl;
	else 
		cout << "任何单词都没有连续出现过" << endl;

	return 0;
}