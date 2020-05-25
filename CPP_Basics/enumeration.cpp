#include <iostream>
using namespace std;

void enumeration(void)
{
    /*
    Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values.
    These values are defined by the programmer at the time of declaring the enumerated type.
    Enum variable takes only one value out of many possible values.
    */
    enum class week 
    { 
        Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday 
    };

    week today = week::Wednesday;
    if (today == week::Wednesday)
    {
        cout << "Day: " << "Wednesday";
    }   
    

    //week today;
    //today = Wednesday;
    //cout << "Day " << today + 1;
}


int main()
{
    enumeration();
    return 0;
}