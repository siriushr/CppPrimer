#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, pre;
	bool check = false;
	while (cin >> s) {
		if (s == pre && s[0] <= 90 && s[0] >= 65) {
			check = true;
			break;
		}
		else 
			pre = s;
	} 
	if (check) cout << s << endl;
	else cout << "no word occurs twice." << endl;
	return 0;
}