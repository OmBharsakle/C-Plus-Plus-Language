//Q.3 Write a program to convert second into hh: mm: ss.
#include <iostream>
using namespace std;
main()
{
	int hh,mm,ss;
	
	cout << "Enter Your Secoun's : ";
	cin >> ss;
	
	hh = ss/3600;
	mm = (ss%3600)/60;
	ss = ss%60;
	
	cout << hh << ":" << mm << ":" << ss;
}
