#include<iostream>
using namespace std;

int main()
{
	int num = 10;
	int* p = &num;

	cout << num << endl;
	cout << &num << endl;
	cout << *p << endl;

	*p = 50;

	cout << num;
	return 0;
}