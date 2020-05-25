// C++ Class Constructor and Destructor

/*
 * Class constructor is a special member function of a class,
 * that is executed whenever we create new objects of that class.
 * A constructor will have exact same name as the class and it does
 * not have any return type at all, not even void.
 * Constructors can be very useful for setting initial values for certain member variables
 */


/* A destructor is a special member function of a class that is executed whenever
 * an object of it's class goes out of scope or whenever the delete expression
 * is applied to a pointer to the object of that class.
 * A destructor will have exact same name as the class prefixed with a tilde (~)
 * and it can neither return a value nor can it take any parameters.
 * Destructor can be very useful for releasing resources before coming out of the program
 * like closing files, releasing memories etc.
*/


#include <iostream>
using namespace std;

class Line {
	public:
	  void setLength(double len);
	  double getLength(void);
	  Line();  // constructor
	  Line(double len);  // parameterized constructor
	  Line(const Line &obj);  // copy constructor
	  ~Line();  // destructor

	private:
	  double length = 0;
};

// Member functions definitions including constructor
Line::Line(void)
{
   cout << "Object is being created" << endl;
}


Line::~Line(void)
{
   cout << "Object is being deleted" << endl;
}

Line::Line(double len)
{
   cout << "Object is being created, length = " << len << endl;
   length = len;
}

void Line::setLength(double len)
{
   length = len;
}

double Line::getLength(void)
{
   return length;
}

// Main function for the program
int main()
{
   Line line;
   Line line1(10.0);

   line.setLength(6.0);  // set line length
   cout << "Length of line : " << line.getLength() << endl;

   return 0;
}
