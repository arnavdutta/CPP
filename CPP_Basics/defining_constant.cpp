/*
There are two simple ways in C++ to define constants :
    -Using #define preprocessor.
    -Using const keyword.
*/                                          

#include <iostream>
using namespace std;

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() 
{
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    
    const int  CONSTANT1 = 10;
    const char CONSTANT2 = 'c';
    cout << CONSTANT1;
    cout << CONSTANT2;

    //LENGTH = LENGTH++;  // error
    //CONSTANT1 = CONSTANT1++;  // error
    
    return 0;
}