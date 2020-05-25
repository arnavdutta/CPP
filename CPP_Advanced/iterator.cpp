/*
An iterator is an object (like a pointer) that points to an element inside the container. 
We can use iterators to move through the contents of the container.
        
        container_type <parameter_list>::iterator iterator_name;

        vector<int>::iterator i;
        vector<string>::iterator j;
        list<int>::iterator k;
        map<int, int>::iterator l;

Types of iterators:

    Input Iterators: They are the weakest of all the iterators and have very limited functionality. 
                     They can only be used in a single-pass algorithms, 
                     i.e., those algorithms which process the container sequentially 
                     such that no element is accessed more than once.
    
    Output Iterators: Just like input iterators, they are also very limited in their functionality 
                      and can only be used in single-pass algorithm, 
                      but not for accessing elements, but for being assigned elements.

    Forward Iterator: They are higher in hierarachy than input and output iterators, 
                      and contain all the features present in these two iterators. 
                      But, as the name suggests, they also can only move in forward direction 
                      and that too one step at a time.
    
    Bidirectional Iterators: They have all the features of forward iterators along with the fact that 
                      they overcome the drawback of forward iterators, as they can move in both the directions, 
                      that is why their name is bidirectional.

    Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially,
                       as their name suggests, they can randomly access any element inside the container. 
                       They are the ones whose functionality is same as pointers.

    Operations of iterators :-

    1. begin()      :-  This function is used to return the beginning position of the container.

    2. end()        :-  This function is used to return the after end position of the container.

    3. advance()    :-  This function is used to increment the iterator position till the specified number 
                        mentioned in its arguments.

    4. next(itr i ,int n)       :-  This function returns the new iterator that the iterator would point after advancing 
                        the positions mentioned in its arguments.

    5. prev(itr i, int n)       :-  This function returns the new iterator that the iterator would point after decrementing 
                        the positions mentioned in its arguments.

    6. inserter()   :-  This function is used to insert the elements at any position in the container. 
                        It accepts 2 arguments, the container and iterator to position where the elements 
                        have to be inserted.

    7. distance(itr first, itr last)   :-  It will return the number of elements or we can say distance between 
                        the first and the last iterator.
*/

#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std;

int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> ar1 = { 10, 20, 30, 40, 50, 60 };

    // Declaring iterator to a vector 
    vector<int>::iterator ptr = ar.begin();

    // Using advance() to increment iterator position points to 4 
    advance(ptr, 3);

    // Displaying iterator position 
    cout << "The position of iterator after advancing is : " << *ptr << " " << endl;

    // Declaring iterators to a vector
    vector<int>::iterator ptr1 = ar.begin();
    vector<int>::iterator ftr = ar.end();

    // Using next() to return new iterator points to 4 
    auto it = next(ptr1, 3);

    // Using prev() to return new iterator points to 3 
    auto it1 = prev(ftr, 3);

    // Displaying iterator position 
    cout << "The position of new iterator using next() is : " << *it << " " << endl;

    // Displaying iterator position 
    cout << "The position of new iterator using prev()  is : " << *it1 << " " << endl;

    // Using advance to set position 
    advance(ptr, 3);

    // copying 1 vector elements in other using inserter() inserts ar1 after 3rd position in ar 
    copy(ar1.begin(), ar1.end(), inserter(ar, ptr));

    // Displaying new vector elements 
    cout << "The new vector after inserting elements is : ";
    for (int& x : ar)
        cout << x << " ";
    cout << endl;

    return 0;

}