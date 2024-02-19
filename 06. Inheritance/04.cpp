//Q.4 Write A Program To Print The Rate Of Interest Of Different Banks Using Hierarchical Inheritance:
// Class RBI -> Class SBI
// Class RBI -> Class BOB
// Class RBI -> Class ICICI
// inherit rate attribute and getROI() Method In All Child Classes
#include<iostream>
using namespace std;

class RBI
{
	protected :
		
	int rate;
	
	void getROI()
	{
		cout << endl;
		cout << "The Rate Of Interest : ";
		cin >> rate;
	}
	
	
};

class SBI : public RBI
{
	public :
	
	void get()
	{
		getROI();
		cout << endl;
		cout << "SBI Interest Is : " <<  rate;
		cout << endl;
	}
		
};

class ICICI : public RBI
{
	public :
	
	void get()
	{
		getROI();
		cout << endl;
		cout << "ICICI Interest Is : " <<  rate;
		cout << endl;
	}
		
};

class BOB : public RBI
{
	public :
	
	void get()
	{
		getROI();
		cout << endl;
		cout << "BOB Interest Is : " <<  rate;
		cout << endl;
	}
		
};

int main()
{
	BOB v;
	v.get();
	SBI s1;
	s1.get();
	ICICI b;
	b.get();
}
