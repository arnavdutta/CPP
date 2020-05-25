#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void random(int n);

void random(int n)
{
    int i, j;
    srand((unsigned)time(NULL));  // set the seed
    /* generate 'n' random numbers. */
    for (i = 0; i < n; i++)
    {
        j = rand();  // generate actual random number
        cout << " Random Number : " << j << endl;
    }
}

int main() 
{
    random(10);
    return 0;
}