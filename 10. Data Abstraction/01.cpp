//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
// the area of a circle
// the area of a triangle 
// the area of a rectangle
// use one single pure virtual function named calculate() to perform all the above operations

#include<iostream>
using namespace std;
class Shape
{
	protected :
	int ans,r,base,height,l,width;

	virtual void calculate() = 0; 
};

class Circle : public Shape
{
	public :
	
	void calculate()
	{
		cout << "Find Circle Area "<< endl;
		cout << "Enter Radius : ";
		cin >> r;
		ans = 3.14*r*r;
		cout << "Ans : " << ans << endl;
	}
};

class Triangle : public Shape
{
	public :
	
	void calculate()
	{
		cout << "Find Triangle Area " << endl;
		cout << "Enter Base : ";
		cin >> base;
		cout << "Enter Height :";
		cin >> height;
		ans = 0.5*height*base;
		cout << "Ans : " << ans << endl;
	}
};

class Rectangle : public Shape
{
	public :
	
	void calculate()
	{
		cout << "Find Rectangle Area " << endl;
		cout << "Enter Width : ";
		cin >> width;
		cout << "Enter Length :";
		cin >> l;
		ans = width*l;
		cout << "Ans : " << ans << endl;
	}
};

int main()
{
	Circle c1;
	Triangle t1;
	Rectangle r1;
	
	c1.calculate();
	t1.calculate();
	r1.calculate();
}
