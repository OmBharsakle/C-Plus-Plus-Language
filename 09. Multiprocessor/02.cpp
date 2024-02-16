#include<iostream>
using namespace std;

class Distances
{
	int km,mtr;
	
	public :
	
	void set()
	{
		cout << "Enter Your KM : ";
		cin >> km; 
		
		cout << "Enter Your Meter : ";
		cin >> mtr;
	}
	
	void get()
	{
		cout << "KM : " << km << endl;
		cout << "Meter : " << mtr;
	}
	
	Distances operator+(Distances &d2)
	{
		Distances temp;
		
		int ans = mtr+d2.mtr;
		
		int ans1 = ans/1000;//3
		int ans2 = ans%1000;//70
		
		int ans3 = this->km+d2.km+ans1;//2+3+3=8
		
		temp.km = ans3;//8
		temp.mtr = ans2;//70
		
		return temp;
		
	}
};

int main()
{
	Distances d1,d2,d3;
	
	d1.set();
	d2.set();
	
	d3 = d1 + d2;
	
	d3.get();
	
	return 0;
}
