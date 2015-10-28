#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int *a, int *b) 
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() 
{
	int val1, val2;
	cin >> val1 >> val2;

	swap(&val1, &val2);
	cout << val1 << ' ' << val2 << endl;
	return 0;
}