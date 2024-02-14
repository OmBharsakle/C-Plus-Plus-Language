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
