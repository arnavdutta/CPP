#include <iostream>
using namespace std;


 /*
 An interface describes the behavior or capabilities of a C++ class without committing 
 to a particular implementation of that class.
 The C++ interfaces are implemented using abstract classes and these abstract classes
 should not be confused with data abstraction which is a concept of keeping implementation details 
 separate from associated data.
 
 A class is made abstract by declaring at least one of its functions as pure virtual function. 
 A pure virtual function is specified by placing "= 0" in its declaration.
 */


 // Base class
class Shape 
{
public:
    virtual int getArea() = 0;  // pure virtual function providing interface framework
    
    void setWidth(int w) 
    {
        width = w;
    }

    void setHeight(int h) 
    {
        height = h;
    }

protected:
    int width = 0;
    int height = 0;
};



// Derived classes
class Rectangle : public Shape 
{
public:
    int getArea() 
    {
        return (width * height);
    }
};



class Triangle : public Shape 
{
public:
    int getArea() 
    {
        return (width * height) / 2;
    }
};



int main(void) 
{
    Rectangle Rect;
    Triangle  Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}