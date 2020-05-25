#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = { 1,2,3,4,5 };
    
    list<int>::iterator list_itr = l.begin();
    advance(list_itr, 1);  // points to 1 index
    
    l.insert(list_itr, 100);  // insert 100 before 2 position
 
    for (auto i : l)
    {
        cout << i << " ";   /* now the list is 1 100 2 3 4 5 */
    }
    cout << endl;

    list<int> new_l = { 10,20,30,40 };   // new list

    new_l.insert(new_l.begin(), l.begin(), l.end());
    /*
    insert elements from beginning of list l to end of list l
    before 1 position in list new_l 
    */
    
    /* now the list new_l is 1 100 2 3 4 5 10 20 30 40 */

    for (auto i : new_l)
    {
        cout << i << " ";   /* now the list is 1 100 2 3 4 5 */
    }
    cout << endl;

    l.insert(l.begin(), 5, 10);  // insert 10 before beginning 5 times
    /* now l is 10 10 10 10 10 1 100 2 3 4 5 */

    for (auto i : l)
    {
        cout << i << " ";   /* now the list is 1 100 2 3 4 5 */
    }
    cout << endl;

    return 0;
}