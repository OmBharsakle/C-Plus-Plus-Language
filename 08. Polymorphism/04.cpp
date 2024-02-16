//Q.4 Write A Program To Overload < Operator To Find Which Object Contains A Higher Value From Given 2 Numbers.
// ++,-
#include<iostream>
using namespace std;
class A
{
	int num;
	
	public :
		
	void set()
	{
		cout << "Enter Your Number : ";
		cin >> num;
	}
	
	void get()
	{
		cout << "Your Ans : " << num ; 
	}
	
	A operator--(int)
	{
		A temp;
		temp.num = --num;
		return temp;
	}
};

int main()
{
	A a1,a2;
	
	a1.set();
	
	a2 = a1--;
	
	a2.get();
}
