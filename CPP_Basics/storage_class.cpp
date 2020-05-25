#include <iostream>
using namespace std;

/* 
A storage class defines the scope(visibility) and life - time of variables and /or functions within a C++ Program.
These specifiers precede the type that they modify.
	-auto:
			Declaring an auto variable (no data-type declaration needed)
			
	-register:
			The register storage class is used to define local variables that should be stored in a register instead of RAM.
			This means that the variable has a maximum size equal to the register size (usually one word) and
			can't have the unary ' & ' operator applied to it (as it does not have a memory location).
			This storage class declares register variables which have the same functionality as that of the auto variables. 
			The only difference is that the compiler tries to store these variables in the register of 
			the microprocessor if a free register is available. 
			This makes the use of register variables to be much faster than that of the variables 
			stored in the memory during the runtime of the program. If a free register is not available, 
			these are then stored in the memory only.

	-static:
			Static variables have a property of preserving their value even after they are out of their scope.
			Hence, static variables preserve the value of their last use in their scope. 
			Therefore, making local variables static allows them to maintain their values between function calls.
			Their scope is local to the function to which they were defined. 
			Global static variables can be accessed anywhere in the program. 
			By default, they are assigned the value 0 by the compiler.
	
	-extern:
			Telling the compiler that the variable x is an extern variable and has been defined elsewhere 
			(above the main function).

	-mutable:
			Sometimes there is a requirement to modify one or more data members of class/struct 
			through const function even though you don’t want the function to update other members of class/struct. 
			This task can be easily performed by using the mutable keyword. 
			The keyword mutable is mainly used to allow a particular data member of const object to be modified. 
			When we declare a function as const, this pointer passed to function becomes const. 
			Adding mutable to a variable allows a const pointer to change members.
*/


void autoStorageClass(void);
void externStorageClass(void);
void staticDemo(void);
void nonStaticDemo(void);
void registerStorageClass(void);


void autoStorageClass(void)
{
	auto a = 32;
	auto b = 3.2;
	auto c = "GeeksforGeeks";
	auto d = 'G';
 
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
}


 
int x;  // declaring the variable which is to be made extern an intial value can also be initialized to x
void externStorageClass(void)
{
	extern int x;
	cout << "Value of the variable 'x' declared, as extern: " << x << endl;

	x = 2;  // value of extern variable x modified 
	cout << "Modified value of the variable 'x' declared as extern: " << x << endl;
}


void staticDemo(void)
{
	/*
	Function containing static variables memory is retained during execution.
	*/
	static int count = 0;
	count++;
	cout << "For static variables: " << count << endl;
}

void nonStaticDemo(void)
{
	/*
	Function containing non-static variables memory is destroyed 
	*/
	int count = 0;
	count++;
	cout << "For non-static variables: " << count << endl;
}


void registerStorageClass(void)
{
	register char b = 'G';
	cout << "Value of the variable 'b' declared as register: " << b << endl;
}



class MutableStorageClass
{
public:
	int x; 
	mutable int y;  // defining mutable variable y now this can be modified

	MutableStorageClass()
	{
		x = 4;
		y = 10;
	}
};


int main(void)
{
	autoStorageClass();
	externStorageClass();
	nonStaticDemo();
	staticDemo();
	registerStorageClass();
	
	const MutableStorageClass m1; 
	m1.y = 20;  // trying to change the value
	cout << "Adding mutable to a variable allows a const pointer to change members: " << m1.y << endl;

	// Uncommenting below lines will throw error 
	//m1.x = 8; 
	//cout << m1.x; 
	return 0;
}