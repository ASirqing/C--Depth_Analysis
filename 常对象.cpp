#include<iostream>
using namespace std;

int i = 1;

class A;	// 前向引用声明
class B
{
public:
	int func(A& a, B& b);	
};
class A
{
	friend int B::func(A& a, B& b);  // B::func 是友元函数
};

class C
{
	friend class B;  // C类的友元类
	C& operator+(C&);					// + 重载成员函数
	friend C& operator-(C&, C&);		// - 重载友元函数
};

class D
{
	int n;
public:
	D(int i) { n = i; };
	void operator++() { n++; };
	void operator++(int){n += 2;};
	void display()
	{
		cout << "n= " << n << endl;
	}
};

class AC
{
private:
	int ac;
public:
	AC(int n) :ac(n) { cout << "构造 " << n << endl; };
	~AC() { cout << "析构 " << ac << endl; };
	void display() { cout << "ac = " << ac << endl; };
	// 重载new, 类内声明，类外初始化
	void* operator new(size_t size);
	// 重载 delete， 类内声明，类外初始化
	void operator delete(void* p);

	int operator()(int a, int b)
	{
		return a + b;
	}
	int operator()(int a)
	{
		return a;
	}
};
void* AC::operator new(size_t size)
{
	cout << "new 重载 " << size << endl;
	void* p = malloc(size);
	return p;
}
void AC::operator delete(void* p)
{
	cout << "delete 重载"  << endl;
	free(p);
}

class M
{
	int m;
public:
	void func();
	void setdata(int n);
	int data;
};
class N :protected M		
{
public:
	M::func;			// 本来是protect继承，显示指定恢复为 public继承
	M::setdata;
	M::data;
};
int main()
{
	int x, y;
	cin >> x >> y;
	
	AC* p1 = new AC(1);
	AC* p2 = new AC(2);

	p1->display();
	p2->display();

	delete p1;
	delete p2;
	//A* const p;		// 指针常量必须进行初始化，p的指向不能变


	return 0;
}


