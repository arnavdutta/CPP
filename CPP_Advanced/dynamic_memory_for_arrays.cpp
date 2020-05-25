#include <iostream>
using namespace std;

class Box 
{
public:
    Box() 
    {
        cout << "Constructor called!" << endl;
    }
    ~Box() 
    {
        cout << "Destructor called!" << endl;
    }
};


int main() 
{
    Box* myBoxArray = new Box[4];  // Request memory for the variable
    delete[] myBoxArray; // Delete array

    /*
    Generic syntax of new operator, you can allocate for a multi-dimensional array as follows −

            double** pvalue  = NULL;      // Pointer initialized with null 
            pvalue  = new double [3][4];  // Allocate memory for a 3x4 array 

    However, the syntax to release the memory for multi-dimensional array will still remain same:

            delete [] pvalue;  // Delete array pointed to by pvalue
    */

    return 0;
}