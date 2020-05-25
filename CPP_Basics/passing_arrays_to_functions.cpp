#include <iostream>
using namespace std;

/*
C++ does not allow to pass an entire array as an argument to a function. 
However, You can pass a pointer to an array by specifying the array's name without an index.

Way-1: Formal parameters as a pointer.
	void myFunction(int *param)
    {
    }

Way-2:Formal parameters as a sized array.
    void myFunction(int param[10])
    {
    }

Way-3:Formal parameters as an unsized array
    void myFunction(int param[])
    {
    }    
*/


double getAverage(int arr[], int size);


double getAverage(int arr[], int size) 
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i) 
    {
        sum += arr[i];
    }
    avg = double(sum) / size;

    return avg;
}


int main() 
{
    int balance[5] = { 1000, 2, 3, 17, 50 };  // an int array with 5 elements.
    double avg;

    avg = getAverage(balance, 5);  // pass pointer to the array as an argument.

    cout << "Average value is: " << avg << endl;  // output the returned value 

    return 0;
}