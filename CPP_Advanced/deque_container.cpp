#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{

    int a[] = { 1,5,8,9,3 };
    deque<int> dq(a, a + 5);
    /* creates a deque with elements 1,5,8,9,3  */


    dq.push_back(10);
    /* now dq is : 1,5,8,9,3,10 */

    dq.push_front(20);
    /* now dq is : 20,1,5,8,9,3,10  */

    deque<int>::iterator i;

    i = dq.begin() + 2;
    /* i points to 3rd element in dq */

    dq.insert(i, 15);
    /* now dq 20,1,15,5,8,9,3,10  */

    int b[] = { 7,7,7,7 };

    dq.insert(dq.begin(), b, b + 4);
    /* now dq is 7,7,7,7,20,1,15,5,8,9,3,10  */


    int c[] = { 1,5,8,9,3,5,6,4 };
    deque<int> dqu(c, c + 8);
    /* creates s deque with elements 1,5,8,9,3,5,6,4  */


    dqu.pop_back();
    /* removes an element from the back */
    /* now the deque dq is : 1,5,8,9,3,5,6 */

    dqu.pop_front();
    /* now dq is : 1,5,8,9,3,5,6  */
}