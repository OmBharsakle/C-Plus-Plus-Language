#include<iostream>
using namespace std;

class A
{
	protected :
	int n;
	public:
	void input()
	{
		cout << "Enter The Value Of Number : ";
		cin >> n;
	}
};

class B : public A
{
	public : 
	
	void square()
	{
		input();
		cout << "Your Square : " << n*n << endl;
	}
};

class C : public A
{
	public : 
	
	void cube()
	{
		input();
		cout << "Your Cube : " << n*n*n;
	}
};

int main()
{
	B b;
	C c;
	
	b.square();
	c.cube();
	
	return 0;
}
