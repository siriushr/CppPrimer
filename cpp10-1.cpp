#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> ivec;
	int i, j;
	cout << "给定值为：";
	cin >> j;
	cout << "给定int序列为：" << endl;
	while (cin >> i) 
		ivec.push_back(i);
	
	auto b = ivec.cbegin(), e = ivec.cend();
	int cnt;
	cnt = count(b, e, j);
	cout << "一共出现了" << cnt << "次" << endl;
	return 0;
}