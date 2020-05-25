#include <iostream>
#include <ctime>

using namespace std;

/*
C++ does not allow to return an entire array as an argument to a function. 
However, you can return a pointer to an array by specifying the array's name without an index.
If you want to return a single-dimension array from a function, 
you would have to declare a function returning a pointer:

        int* myFunction() 
        {
        }

C++ does not advocate to return the address of a local variable to outside of the function 
so you would have to define the local variable as static variable.
*/



int* getRandom() 
{   
    /*
    function to generate and return random numbers.
    */

    static int  r[10];

    srand((unsigned)time(NULL));  // set the seed

    for (int i = 0; i < 10; ++i) 
    {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}


int main() 
{
    int* p;  // a pointer to an int.
    p = getRandom();

    for (int i = 0; i < 10; i++) 
    {
        cout << "*(p + " << i << ") : " << *(p + i) << endl;
    }

    return 0;
}