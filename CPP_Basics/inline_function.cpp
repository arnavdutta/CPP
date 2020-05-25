#include <iostream>
using namespace std;

/*
 * If a function is inline, the compiler places a copy of the code of that function
 * at each point where the function is called at compile time.
 * Any change to an inline function could require all clients of the function to be recompiled
 * because compiler would need to replace all the code once again otherwise it will continue with old functionality.
 */

inline int Max(int x, int y)
{
   return (x > y) ? x : y;
}

int main()
{
   cout << "Max (20, 10): " << Max(20, 10) << endl;
   cout << "Max (0, 200): " << Max(0, 200) << endl;
   cout << "Max (100, 1010): " << Max(100, 1010) << endl;

   return 0;
}
