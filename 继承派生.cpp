#include<iostream>
using namespace std;

class A
{
	char a;
public:
	void func() { cout << "hahaha" << endl; }
};
class B
{
	char b;
};
class C :public A, public B
{
	char c;
};
class M {};
class N:virtual public M{};
class X
{
public:
	int x;
private:
	int y;
protected:
	int z;
};
class Y :private X
{
public:
	void func() { this->x==10; };
};
int main()
{

	//C* pc = new C;
	//A* pa = dynamic_cast<A*>(pc);
	//B* pb = dynamic_cast<B*>(pc);
	//cout << "pa = " << (int)pa << endl;
	//cout << "pb = " << (int)pb << endl;
	//cout << "pc = " << (int)pc << endl;

	//A a;
	//pc = static_cast<C*>(&a);
	//pc->func();
	//int x = 0;
	//int y = 1;
	//x = x + 3 >= ++y && y * x++;
	//x = (x + 3 >= ++y) &&(y * x++); // y*x先判断是否为0，然后x=x+1，最后整个表达式x = 0或1
	
	/*C* pc = new C;
	B* pb = dynamic_cast<B*>(pc);
	A* pa = dynamic_cast<A*>(pc);
	if (pb == pc)
	{
		cout << "pb==pc" << endl;
	}
	else
	{
		cout << "pb!=pc" << endl;
	}
	if ((int)pb == (int)pc)
	{
		cout << "(int)pb == (int)pc" << endl;
	}
	else
	{
		cout << "(int)pb != (int)pc" << endl;
	}*/
	
	return 0;
}