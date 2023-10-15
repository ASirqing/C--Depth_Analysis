#include<iostream>
using namespace std;


int main()
{
	int arr[10];
	char* pc = (char*)arr;
	int* p = arr;
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i+1;
	}
	cout << "arr = " << arr << endl;
	cout << "pc = " << static_cast<void*>(pc) << endl;
	cout << "p = " << p << endl;
	cout << "&arr = " << &arr << endl;
	cout << "pc+1 = " << static_cast<void*>(pc+1) << endl;
	cout << "p+1 = " << p+1 << endl;
	cout << "arr+1 = " << arr+1 << endl;
	cout << "&arr+1 = " << &arr + 1 << endl;
	cout << "&arr[0]+1 = " << &arr[0] + 1 << endl;
	cout << "(char*)((int*)pc + 1) = " << static_cast<void*>((char*)((int*)pc + 1)) << endl;
	cout << "p+1 = " << p + 1 << endl;
	pc++;
	p += 2;
	
	cout << "pc++  " << "p++ " << endl;
	//cout << "p-pc = " << (char*)p - pc << endl;
	int* pp = (int*)pc;
	cout << p - pp << endl;
	return 0;
}