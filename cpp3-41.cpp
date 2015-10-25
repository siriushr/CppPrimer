#include <iostream>
#include <vector>

using std::vector;
using std::begin;
using std::end;

int main()
{
	int array[10] = {};
	vector<int> ivec(begin(array), end(array));
	return 0;
}