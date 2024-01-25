//Q.3 Write A Program To Read And Print Distance For Feet And Inches.
#include<iostream>
using namespace std;

main()
{
	int feet,inc,i;
	
	cout << "Enter Feet : ";
	cin >> feet;
	
	cout << "Enter Inches : ";
	cin >> inc;
	
	for(i=0; i<inc; i++)
	{
		if(inc>=12)
		{
			inc-=12;
			feet++;
		}
	}
	
	cout << "Feet : " << feet << " " << "\nInch : " << inc ;
}
