#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void stringDemo(void)
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int  len1;

    strcpy(str3, str1);  // copy str1 into str3
    cout << "strcpy( str3, str1) : " << str3 << endl;

    strcat(str1, str2);  // concatenates str1 and str2
    cout << "strcat( str1, str2): " << str1 << endl;

    len1 = strlen(str1);  // total lenghth of str1 after concatenation
    cout << "strlen(str1) : " << len1 << endl;

    // The String Class in C++

    string str4 = "Learning";
    string str5 = "CPP";
    string str6;
    int  len2;

    str6 = str4;  // copy str4 into str6
    cout << "str6 : " << str6 << endl;

    str6 = str4 + str5;  // concatenates str4 and str5
    cout << "str4 + str5 : " << str6 << endl;

    len2 = str6.size();  // total length of str3 after concatenation
    cout << "str3.size() :  " << len2 << endl;

}


int main() 
{
    stringDemo();
    

    return 0;
}