/* 
priority_queue is just like a normal queue except 
the element removed from the queue is always the greatest among all the elements in the queue, 
thus this container is usually used to replicate Max Heap in C++.

        priority_queue<int> pq;
*/

#include <iostream>>     
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq1;

    pq1.push(30);  // inserts 30 to pq1 , now top = 30
    pq1.push(40);  // inserts 40 to pq1 , now top = 40 ( maxinmum element)
    pq1.push(90);  // inserts 90 to pq1 , now top = 90  
    pq1.push(60);	// inserts 60 to pq1 , top still is 90	

    cout << pq1.top() << endl;

    return 0;
}