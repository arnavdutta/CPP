/*
An array works fine when we have to implement sequential data structures like arrays, except it is static, 
i.e. we have to define its maximum size during its initialization and it cannot contain elements 
greater than its maximum size. 

Now suppose, if during the program execution we have to store elements more than its size, or 
if we are reading input stream of elements and we do not know the upper bound of the number of elements, 
there are high chances of occurrence of index_out_bound exception or unwanted termination of the program.

Solution of the above problem is dynamic arrays! They have dynamic size, i.e. their size can change during runtime. 
Container library provides vectors to replicate dynamic arrays.
		
		vector< object_type > vector_name;

Vector being a dynamic array, doesn't needs size during declaration.
		std::vector<int> my_vector;

There are many ways to initialize a vector:

	1. std::vector<string> v {"Pankaj" ,"The" ,"Java" ,"Coder"};
	2. std::vector<string> v(v1.begin(), v1.end());  // initialize the vector based on the range of other vectors
	3. std::vector<string> v(4 , "test");  // initialize a vector with one element a certain number of times

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>  v;
    
    v.push_back(1);  // insert 1 at the back of v. 
                     // push_back() is used for inserting an element at the end of the vector. 
                     // If the type of object passed as parameter in the push_back() is not same 
                     // as that of the vector or is not interconvertible an exception is thrown.
    v.push_back(2);  // insert 2 at the back of v
    v.push_back(3);  // insert 3 at the back of v
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    /*
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)  // If you want to modify the vector's contents 
                                                                  // in the for loop, 
                                                                  // then use iterator rather than const_iterator
    {
        cout << *i << " ";   // for printing the vector
    }
    */

    /*
    for (auto i = v.begin(); i != v.end(); i++)  // auto (C++11), type of i will be non-const 
                                                 // (i.e., the compiler will use std::vector<char>::iterator 
                                                 // as the type of i)
    {
        cout << i << " ";
    }
    */

    for (auto i : v)  /* range-based for loop (C++11) */
    {
        cout << i << " ";
    }
    cout << endl;


    v.pop_back();  /* pop_back() is used to remove the last element from the vector */
    for (auto i : v)  /* range-based for loop (C++11) */
    {
        cout << i << " ";
    }
    cout << endl;


    vector<int>::iterator erase_itr = v.begin();
    v.erase(erase_itr);   /* erase(itr_pos) removes the element pointed by the iterator itr_pos.
                    erase method can also be overloaded with an extra iterator specifying the end point 
                    of the range to be removed, i.e erase(itr_start, itr_end)
                    */
    v.erase(v.begin(), v.end() - 2);  /* removes all the elements except last two */
    
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;


    vector<int>::iterator insert_itr = v.begin();
    v.insert(insert_itr, 1); /* 
                             insert(itr, element) method inserts the element in vector before the position 
                             pointed by iterator itr 
                             */
    v.insert(insert_itr = v.begin(), 5, 100);  /*
                                               insert function can be overloaded by third argument, count as well. 
                                               This count parameter defines how many times the element is to be 
                                               inserted before the pointed position.
                                               */

    /*
    v.insert(insert_itr, v1.begin(), v1.end());

    This method can also be used to insert elements from any other vector in given range, specified 
    by two iterators, defining starting and ending point of the range.
    */

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v.at(6) << endl;  // returns the element at ith index in the vector v
    cout << v.front() << endl;  // retuns the element at the front of the vector (i.e. leftmost element).
    cout << v.back() << endl;  // returns the element at the back of the vector (i.e. rightmost element).
    cout << v.size() << endl;  // returns the size of the vector.

    /* 
    Other vector functions :

        resize(size_type n, value_type val):
                method resizes the vector to n elements. If the current size of the vector is greater than n 
                then the trailing elements are removed from the vector and if the current size is smaller than n 
                than extra val elements are inserted at the back of the vector.

        v1.swap(v2):
                This method interchanges value of two vectors.

        v.clear():
                This method clears the whole vector, removes all the elements from the vector 
                but do not delete the vector.
    
    */

}