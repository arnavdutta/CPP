#include <iostream>
#include <thread>

using namespace std;


void threadFn1(int &value)
{
	cout << "I'm inside threadFn()" << endl;
	cout << "Value => " << value++ << endl;
}


template<typename T>
void threadFn2()
{
	cout << "Type is  => " << typeid(T).name() << endl;
}
int main()
{
	int localValue = 100;
	thread t1{ threadFn1, ref(localValue) };
	t1.join();
	cout << "Value in Main Thread => " << localValue << endl;

	thread t2{ threadFn2<int> };
	this_thread::sleep_for(chrono::milliseconds(1000));
	thread t3{ threadFn2<float> };

	t2.join();
	t3.join();


	return 0;
}