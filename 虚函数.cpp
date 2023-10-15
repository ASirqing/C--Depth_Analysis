#include<iostream>
using namespace std;

class A {
public:
	virtual void func() { cout << "A virtual func()...	" << endl; };
	virtual ~A() { cout << "~A()...." << endl; };
	int x;
};
class B
{
public:
	virtual ~B() { cout << "~B()....." << endl; };
	virtual void m_Bfun() { cout << "B fun()...." << endl; };
	virtual void func() { cout << "B virtual func()...	" << endl; }

	int y;
};

class C : public A, public B
{
public:
	virtual void c_fun() { cout << "c_fun()...." << endl; };
	void func() override { cout << "C fun£¨£©¡£¡£¡£¡£"; };
	int m;
};
int main()
{
	C c;
	A a;
	B b;
	A* pa = &c;
	B* pb = &c;
	cout << "sizeof(A)" << sizeof(A) << endl;
	cout << "sizeof(B)" << sizeof(B) << endl;
	cout << "sizeof(C)" << sizeof(C) << endl;
	return 0;
}