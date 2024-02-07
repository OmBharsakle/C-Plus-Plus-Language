//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
// Class P has the following members: temperature attribute in float
// Class Q has the following members: toFehrenheit() method
// Class R has the following members: toKelvin() method.
#include<iostream>
using namespace std;

class P
{
	protected :
		float tem;
};

class Q : public P
{
	public :
		
	void input()
	{
		cout << "Enter Celsius : ";
		cin >> tem;
	}
	
	void toFehrenheit()
	{
		float f;
		
		f = tem*1.8+32;
		
		cout << "Fehrenheit : " << f << endl;
		
	}
};

class R : public Q
{
	public :
		
	void toKelvin()
	{
		float k;
		k = tem + 273.15;
		cout << "Kelvin : " << k ;
	}
};

int main()
{
	R a1;
	
	a1.input();
	a1.toFehrenheit();
	a1.toKelvin();
}
