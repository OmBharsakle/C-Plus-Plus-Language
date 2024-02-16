//Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition

#include<iostream>

using namespace std;

class A
{
	protected:
		
	int a,b,c,d,e,sum;


};

class B : public A
{
	public:
		
	void calc(int a,int b)
	{
		sum=a/b;
		cout<<"Division (A/B) : " << sum << endl;
	}
	void calc(int a,int b,int c)
	{
		sum=a-b-c;
		cout<<"Substract (A-B-C) : " << sum << endl;
	}
	void calc(int a,int b,int c,int d)
	{
		sum=a*b*c*d;
		cout<<"Multiple (A*B*C*D*E) : " << sum << endl;
	}
	void calc(int a,int b,int c,int d,int e)
	{
		sum=a+b+c+d+e;
		cout<<"Addition (A+B+C+D+E): " << sum;
	}

};

int main()
{
	int a,b,c,d,e;
	
	cout<<"Enter The Value Of A : ";
	cin>>a;
	cout<<"Enter The Value Of B : ";
	cin>>b;
	cout<<"Enter The Value Of C : ";
	cin>>c;
	cout<<"Enter The Value Of D : ";
	cin>>d;
	cout<<"Enter The Value Of E : ";
	cin>>e;

	B b1;
	
	b1.calc(a,b);
	b1.calc(a,b,c);
	b1.calc(a,b,c,d);
	b1.calc(a,b,c,d,e);
	
	return 0;

}

