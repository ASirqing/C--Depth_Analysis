#include<iostream>
using namespace std;

/// <summary>
///		背景：虚函数被设置为私有，不能直接访问
///		破解：获取到虚函数表指针，通过虚函数表指针调用私有虚函数
/// </summary>
/// <returns></returns>
class A
{
	virtual void g() { cout << "A::g()....." << endl; };
	virtual void f() { cout << "A::f()......" << endl; };
};
class B :public A
{
	void g() { cout << "B::g()....." << endl; }
	virtual void func() { cout << "B::func()....." << endl; };
};
using pFunc = void(*)(void);
int main()
{
	B b;
	pFunc fun;
	// 获取3个虚函数
	for (int i = 0; i < 3; ++i)
	{

	}
	return 0;
}