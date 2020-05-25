#include <iostream>
using namespace std;

/*
std::exception
    An exception and parent class of all the standard C++ exceptions.

std::bad_alloc
    This can be thrown by new.

std::bad_cast
    This can be thrown by dynamic_cast.

std::bad_exception
    This is useful device to handle unexpected exceptions in a C++ program.

std::bad_typeid
    This can be thrown by typeid.

std::logic_error
    An exception that theoretically can be detected by reading the code.

        std::domain_error
            This is an exception thrown when a mathematically invalid domain is used.

        std::invalid_argument
            This is thrown due to invalid arguments.

        std::length_error
            This is thrown when a too big std::string is created.

        std::out_of_range
            This can be thrown by the 'at' method, for example a std::vector and std::bitset<>::operator[]().

std::runtime_error
    An exception that theoretically cannot be detected by reading the code.

        std::overflow_error
            This is thrown if a mathematical overflow occurs.

        std::range_error
            This is occurred when you try to store a value which is out of range.

        std::underflow_error
            This is thrown if a mathematical underflow occurs.


*/

double division(int a, int b) 
{
    if (b == 0) 
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}

/*
Define your own exceptions by inheriting and overriding exception class functionality.
*/
struct MyException : public exception 
{
    const char* what() const throw () 
    {
        return "C++ Exception";
    }
};


int main() 
{
    int x = 50;
    int y = 0;
    double z = 0;

    try 
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char* msg) 
    {
        cerr << msg << endl;
    }


    try 
    {
        throw MyException();
    }
    catch (MyException& e) 
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;

        // what() is a public method provided by exception class and it has been overridden 
        // by all the child exception classes. 
        // This returns the cause of an exception.
    }
    catch (std::exception& e) 
    {
        //Other errors
    }


    return 0;
}