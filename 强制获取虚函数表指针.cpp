#include<iostream>
using namespace std;

/// <summary>
///		�������麯��������Ϊ˽�У�����ֱ�ӷ���
///		�ƽ⣺��ȡ���麯����ָ�룬ͨ���麯����ָ�����˽���麯��
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
	// ��ȡ3���麯��
	for (int i = 0; i < 3; ++i)
	{

	}
	return 0;
}