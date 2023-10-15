#include<iostream>
using namespace std;

int i = 1;

class A;	// ǰ����������
class B
{
public:
	int func(A& a, B& b);	
};
class A
{
	friend int B::func(A& a, B& b);  // B::func ����Ԫ����
};

class C
{
	friend class B;  // C�����Ԫ��
	C& operator+(C&);					// + ���س�Ա����
	friend C& operator-(C&, C&);		// - ������Ԫ����
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
	AC(int n) :ac(n) { cout << "���� " << n << endl; };
	~AC() { cout << "���� " << ac << endl; };
	void display() { cout << "ac = " << ac << endl; };
	// ����new, ���������������ʼ��
	void* operator new(size_t size);
	// ���� delete�� ���������������ʼ��
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
	cout << "new ���� " << size << endl;
	void* p = malloc(size);
	return p;
}
void AC::operator delete(void* p)
{
	cout << "delete ����"  << endl;
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
	M::func;			// ������protect�̳У���ʾָ���ָ�Ϊ public�̳�
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
	//A* const p;		// ָ�볣��������г�ʼ����p��ָ���ܱ�


	return 0;
}


