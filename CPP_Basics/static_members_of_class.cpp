//Static Members of a C++ Class

#include <iostream>
using namespace std;

class Box
{
   public:
      static int objectCount;
      /* When we declare a member of a class as static it means no matter how many objects
       * of the class are created, there is only one copy of the static member.
       * A static member is shared by all objects of the class.
       * All static data is initialized to zero when the first object is created,
       * if no other initialization is present.
       * We can't put it in the class definition but it can be initialized outside the class.
       */

      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;

         objectCount++;  // Increase every time object is created
      }

      double Volume()
      {
         return length * breadth * height;
      }

      static int getCount()
      {
    	  /* By declaring a function member as static, you make it independent of any particular object of the class.
    	   * A static member function can be called even if no objects of the class exist and
    	   * the static functions are accessed using only the class name and the scope resolution operator (::).
    	   * A static member function can only access static data member,
    	   * other static member functions and any other functions from outside the class.
    	   * Static member functions have a class scope and they do not have access to the this pointer of the class.
    	   * You could use a static member function to determine whether some objects of the class have been created or not.
    	   */

    	  return objectCount;
      }

   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int Box::objectCount = 0;  // Initialize static member of class Box

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);  // Declare box1
   Box Box2(8.5, 6.0, 2.0);  // Declare box2

   cout << "Total objects: " << Box::objectCount << endl;  // Print total number of objects.
   cout << "Final Stage Count: " << Box::getCount() << endl;  // Print total number of objects after creating object.

   return 0;
}
