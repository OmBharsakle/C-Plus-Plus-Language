//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
// Class X has the following members: a, b & c attributes in integer data type
// Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;
class X
{
	protected :
		int a,b,c;
	
};

class Y : public X
{
	public :	
	
	void setData()
	{
		cout << "Enter A : ";
		cin >> a;
		
		cout << "Enter B : ";
		cin >> b;
		
		cout << "Enter C : ";
		cin >> c;
	}
	void getData()
	{
		int cube = (a*a*a) + (b*b*b) + (c*c*c);
		
		cout << "Your Cube Sum Ans : " << cube;
	}
};

int main()
{
	Y cube;
	cube.setData();
	cube.getData();
}
