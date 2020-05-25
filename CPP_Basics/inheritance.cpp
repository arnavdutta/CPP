// Inheritance

/*
 * We hardly use protected or private inheritance, but public inheritance is commonly used.
 * While using different type of inheritance, following rules are applied −
 *
 * 		Public Inheritance − When deriving a class from a public base class,
 * 			public members of the base class become public members of the derived class and
 * 			protected members of the base class become protected members of the derived class.
 * 			A base class's private members are never accessible directly from a derived class,
 * 			but can be accessed through calls to the public and protected members of the base class.
 *
 * 		Protected Inheritance − When deriving from a protected base class,
 * 			public and protected members of the base class become protected members of the derived class.
 *
 * 		Private Inheritance − When deriving from a private base class,
 * 			public and protected members of the base class become private members of the derived class.
 */


#include <iostream>
using namespace std;

// Base class
class Shape
{

	public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }


	protected:
      int width;
      int height;
};


// Derived class
class Rectangle: public Shape
{
	/*
	 * A derived class inherits all base class methods with the following exceptions:
	 * 		Constructors, destructors and copy constructors of the base class.
	 * 		Overloaded operators of the base class.
	 * 		The friend functions of the base class.
	 */

	public:
      int getArea()
      {
         return (width * height);
      }
};

int main(void)
{
   Rectangle Rect;

   Rect.setWidth(5);
   Rect.setHeight(7);

   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
