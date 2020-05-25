#include <iostream>
using namespace std;

// Function Declaration

void for_loop();
void while_loop();
void do_while_loop();


// Function Definition

void for_loop()
{
	for (int i = 0; i <= 10; i++)
	{
		cout << "Practicing FOR Loop " << i << endl;
	}
}


void while_loop()
{
	int i = 1;

	while (i < 6)
	{
		cout << "Practicing WHILE Loop " << i << endl;

		i++;
	}
}


void do_while_loop()
{
	int i = 10; // initialization expression

	do
	{
		cout << "Practicing DO WHILE Loop " << i << endl;
		i++; // update expression
	}
	while (i < 1); // test expression
}



int main()
{
	for_loop();
	while_loop();
	do_while_loop();

	return 0;
}
