#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ifstream in("Data");
	string word, line;
	vector<string> vec;

	if (!in) {
		cerr << "Error." << endl;
		return -1;
	} 

	while (getline(in, line)) {
		vec.push_back(line);
	}

	in.close();

	auto it = vec.cbegin();
	while (it != vec.cend()) {
		istringstream line_str(*it);
		while (line_str >> word) 
			cout << word << " ";
		cout << endl;
		++it;
	}
	return 0;
}