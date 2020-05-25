/*
Maps are used to replicate associative arrays. Maps contain sorted key-value pair, 
in which each key is unique and cannot be changed, and it can be inserted or deleted 
but cannot be altered. Value associated with keys can be altered.

		map<key_type , value_type> map_name;
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> m{ {1,2} , {2,3} , {3,4}, {4,5} };
    // creates a map m with keys 1,2,3 and their corresponding values 2,3,4

    map<string, int> map1;
    // creates a map with keys of type character and values of type integer

    map1["abc"] = 100;    // inserts key = "abc" with value = 100
    map1["b"] = 200;      // inserts key = "b" with value = 200
    map1["c"] = 300;      // inserts key = "c" with value = 300
    map1["def"] = 400;    // inserts key = "def" with value = 400

    map<string, int> map2(map1.begin(), map1.end());
    // creates a map map2 which have entries copied from map1.begin() to map1.end()

    map<int, int> map3(m);
    // creates map map3 which is a copy of map m


    map<int, string> map4{ {1, "nikhilesh"} , {2, "shrikant"} , {3, "ashish"} };
    cout << map4.at(1) << endl;  // prints value associated with key 1 ,i.e nikhilesh
    cout << map4.at(2) << endl;  // prints value associated with key 2 ,i.e shrikant

    /* note that the parameters in the above at() are the keys not the index */

    cout << map4[3] << endl; // prints value associated with key 3 , i.e ashish
    map4.at(1) = "vikas";  // changes the value associated with key 1 to vikas
    map4[2] = "navneet";  // changes the value associated with key 2 to navneet
    map4[4] = "doodrah";  // since there is no key with value 4 in the map, it insert a key-value pair in map with key=4 and value = doodrah
    //map4.at(5) = "umeshwa";  // since there is no key with value 5 in the map, it throws an exception
    cout << map4.at(4) << endl;



    m.insert(pair<int, int>(4, 5));
    /* inserts a new entry of key = 4 and value = 5 in map m */

    /* make_pair() can also be used for creating a pair */
    m.insert(make_pair(5, 6));
    /* inserts a new entry of key = 5 and value = 6 */

    map<int, int>::iterator i, j;
    i = m.find(2);    // points to entry having key =2
    j = m.find(5);    // points to entry having key =5

    map<int, int> new_m;

    new_m.insert(i, j);
    // insert all the entries which are pointed by iterator i to iterator j

    m.insert(make_pair(3, 6));
    // do not insert the pair as map m already contain key = 3 

}