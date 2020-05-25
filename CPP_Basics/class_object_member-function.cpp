#include <iostream>
using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;

	// member function declaration
	double getVolume(void);
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
};

// member function definition
double Box::getVolume(void)
{
	return length * breadth * height;
}

void Box::setLength(double len)
{
	length = len;
}

void Box::setBreadth(double bre)
{
	breadth = bre;
}

void Box::setHeight(double hei)
{
	height = hei;
}



int main()
{
	Box Box1;
	Box Box2;
	double volume = 0.0;

	//	Box1 Specification
	Box1.setLength(5.0);
	Box1.setBreadth(6.0);
	Box1.setHeight(7.0);

	//	Box2 Specification
	// Box2.height = 10.0;
	// Box2.length = 12.0;
	// Box2.breadth = 13.0;
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);

	// NOTE: private and protected members can not be accessed directly using direct member access operator (.)

	// Volume of Box1
	// volume = Box1.length * Box1.breadth * Box1.height;
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;

	// Volume of Box2
	// volume = Box2.length * Box2.breadth * Box2.height;
	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;

	return 0;
}
