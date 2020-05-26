/*
Difference between:

vector<const string>		:	Cannot change the values of the elements of this vector after they've been added.

const vector<string>		:	Cannot change anything about the vector.

const vector<const string>	:	Same as 'const vector<string>', i.e. cannot change anything about the vector, 
								should use a const vector<string> and the vector being const should prevent you from 
								changing its contents.

*/

#include <iostream>
#include <vector>

using namespace std;


void pprint(const vector<string> nums)  //can't change values in vector - they are const
{                  

	vector<int>::const_iterator it;  //because the vector is const I need a const interator
	for (auto it : nums ) 
	{
		cout << it << endl;
		//(*it)++;                            //error C3892: 'it' : you cannot assign to a variable that is const
		//cout << *it << endl; 
	}

}

vector<int> combine(const vector<int>& v1, const vector<int>& v2) 
{
	vector<int> newvec = v1;
	for (int i = 0; i < v2.size(); i++) 
	{
		newvec.push_back(v2[i]);
	}
	return newvec;
}


int main()
{
	const vector<string> Months
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	//Months[3] = "Oh no!";  // Not possible if vector is const. i.e const vector<string> Months or vector<const string> Months
	cout << Months[3] << endl;

	pprint(Months);

	
	vector<int> nums1(4);
	vector<int> nums2(3);

	nums1[0] = 1;
	nums1[1] = 2;
	nums1[2] = 3;
	nums1[3] = 3;

	nums2[0] = 11;
	nums2[1] = 12;
	nums2[2] = 13;

	vector<int> c = combine(nums1, nums2);
	//or
	//typedef vector<int> vint;
	//vint c = combine(nums1,nums2);

	for (int i = 0; i < c.size(); i++) 
	{
		cout << c[i] << ", ";
	}
	cout << endl;
}