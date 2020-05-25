/*  insertion and deletion is always performed at the top of the stack. */

#include <iostream>      
#include <stack>

using namespace std;

int main()
{
    stack<int> s;   // creates an empty stack of integer s 

    s.push(2);   // pushes 2 in the stack  , now top =2
    s.push(3);   // pushes 3 in the stack  , now top =3
    s.push(4);   // pushes 3 in the stack  , now top =4
    s.push(5);   // pushes 3 in the stack  , now top =5
    s.push(6);   // pushes 3 in the stack  , now top =6
    s.push(7);   // pushes 3 in the stack  , now top =7
    
    cout << s.top() << endl;
    cout << s.size() << endl;

    s.pop();    // The element removed is always the topmost element of the stack
    s.pop();
    
    cout << s.top() << endl;
    cout << s.size() << endl;
}