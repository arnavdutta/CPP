#include <iostream>

using namespace std;

void pointers();



/*
int    *ip;    // pointer to an integer
double *dp;    // pointer to a double
float  *fp;    // pointer to a float
char   *ch     // pointer to character
 */


void pointers()
{
	int var1;
	char var2[10];

	cout << "Address of var1 " << &var1 << endl;
	cout << "Address of var2 " << &var2 << endl;

	//--------------------------------------------------------------------------------------------------------------------------------

	int var = 20;  // actual variable declaration
	int *ip = NULL;  // pointer variable (always initialize pointer with NULL)
	ip = &var;  // store address of var in pointer variable

	//  NOTE: The type of the pointer has to match the type of the variable you're working with.
	// *ip will always take &var, i.e. to store & (address of variable) it needs * (pointer variable)
   cout << "Value of var variable: " << var << endl;
   cout << "Address stored in ip variable: " << ip << endl;  // print the address stored in ip pointer variable
   cout << "Value of *ip variable: " << *ip << endl;  // access the value at the address available in pointer / Dereferencing

   //--------------------------------------------------------------------------------------------------------------------------------
   int a = 7, b;
   int *p; // Un-initialized Pointer
   p = &a; // Stores address of a in ptr p
   cout << "address stored in pointer p: " << p << endl;
   cout << "data contained in memory location pointed to by a pointer p: " << *p << endl;  // Dereferencing
	//   b = p;  // not possible---> throws error as b is not a pointer variable
   b = *p;  // possible
   cout << "value of b: " << b << endl;

   //--------------------------------------------------------------------------------------------------------------------------------

   int  arr[3] = {10, 100, 200};
   int  *ptr;

	ptr = arr;  // let us have array address in pointer.
	for (int i = 0; i < 3; i++)
	{
		 cout << "Address of arr[" << i << "] = " << ptr << endl;
		 cout << "Value of arr[" << i << "] = " << *ptr << endl;
		 ptr++;  // point to the next location
	}

	//--------------------------------------------------------------------------------------------------------------------------------

	int  vars;
	int  *ptrs;
	int  **pptr;  // pointer to a pointer
	vars = 3000;
	ptrs = &vars;  // take the address of vars
	pptr = &ptrs;  // take the address of ptrs using address of operator &

	cout << "Value of vars :" << vars << endl;
	cout << "Value available at *ptrs :" << *ptrs << endl;
	cout << "Value available at **pptr :" << **pptr << endl;
}



int main()
{
	pointers();

	return 0;
}
