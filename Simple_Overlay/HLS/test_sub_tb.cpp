#include <iostream>

using namespace std;

void test_sub(int a, int b, int *y);

int main()
{
	int a = 1;
	int b = 2;
	int y;
	test_sub(a, b, &y);
	cout << "sub a = " << a << " - b = " << b << " is = " << y << endl;
	return 0;
}
