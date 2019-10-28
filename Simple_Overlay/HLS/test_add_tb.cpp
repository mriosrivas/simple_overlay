#include <iostream>

using namespace std;

void test_add(int a, int b, int *y);

int main()
{
	int a = 1;
	int b = 2;
	int y;
	test_add(a, b, &y);
	cout << "add a = " << a << " + b = " << b << " is = " << y << endl;
	return 0;
}
