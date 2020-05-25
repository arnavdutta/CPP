// Class Access Modifiers

#include <iostream>
using namespace std;


class Box
{
   public:
		/*
		 * A public member is accessible from anywhere outside the class but within a program.
		 * You can set and get the value of public variables without any member function.
		 */
		double length;
		void setWidth(double wid);
		double getWidth(void);

   private:
		/*
		* NOTE: A private member variable or function cannot be accessed, or even viewed from outside the class.
		* Only the class and friend functions can access private members.
		*
		* By Default: All the members of a class would be private, i.e. until you label a member,
		* it will be assumed a private member.
		*
		* Practically, we define data in private section and related functions in public section
		* so that they can be called from outside of the class.
		*/
		double width;

   protected:
   		/*
   		* NOTE: Protected member variable or function is very similar to a private member,
   		* but it provided one additional benefit that they can be accessed in child classes,
   		* which are called derived classes
   		*/
   		double height;
};


class SmallBox:Box  // SmallBox is the derived class from Box class.
{
public:
	void setSmallHeight(double hei);
	double getSmallHeight(void);
};

// Member functions definitions of parent class
double Box::getWidth(void)
{
   return width;
}

void Box::setWidth(double wid)
{
   width = wid;
}

// Member functions definitions of child class
double SmallBox::getSmallHeight(void)
{
   return height;
}

void SmallBox::setSmallHeight(double hei)
{
   height = hei;
}

// Main function for the program
int main()
{
	Box box;
	box.length = 10.0; // set box length without member function because length is public
	// box.width = 10.0; // set box width without member function, Error: because width is private
	box.setWidth(10.0);  // Use member function to set it.
	cout << "Length of box : " << box.length << endl;
	cout << "Width of box : " << box.getWidth() << endl;


	SmallBox smallbox;
	smallbox.setSmallHeight(5.0);  // set smallbox height using member function
	cout << "Height of smallbox : " << smallbox.getSmallHeight() << endl;

   return 0;
}
