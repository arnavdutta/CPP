#include <iostream>
using namespace std;


void swap_by_reference(int &x, int &y);  // &x is address of x and &y is address of y
void swap_by_value(int x, int y);


void swap_by_reference(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}


void swap_by_value(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}


int main()
{
	int a = 100;
	int b = 200;

	cout << "Before swap_by_value, a: " << a << endl;
	cout << "Before swap_by_value, b: " << b << endl;
	swap_by_value(a, b);
	cout << "After swap_by_value, a: " << a << endl;
	cout << "After swap_by_value, b: " << b << endl;

	cout << "Before swap_by_reference, a: " << a << endl;
	cout << "Before swap_by_reference, b: " << b << endl;
	swap_by_reference(a, b);
	cout << "After swap_by_reference, a: " << a << endl;
	cout << "After swap_by_reference, b: " << b << endl;

	return 0;
}
