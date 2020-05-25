/*  insertion always takes place at the back of the queue and deletion is always performed at the front of the queue */
#include <iostream>      
#include <queue> 

using namespace std;

int main()
{
    queue <int> q;   // creates an empty queue of integer q 

    q.push(2);   // pushes 2 in the queue  , now front = back = 2
    q.push(3);   // pushes 3 in the queue  , now front = 2 , and back = 3

    q.pop();  // removes 2 from the stack , front = 3

    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
}