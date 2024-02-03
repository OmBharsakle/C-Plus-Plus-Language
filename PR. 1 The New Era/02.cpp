#include<iostream>
using namespace std;
class Time
{
	public :
	int hh,mm,ss;	
	
};
main()
{
	Time t;
	
	int hh,mm,ss;
	
	cout << "Enter Your Second : ";
	cin >> ss;
	
	t.hh = ss/3600;
	t.mm = (ss%3600)/60;
	t.ss = ss%60;
	
	cout << t.hh << ":" << t.mm << ":" << t.ss ;
	
}
