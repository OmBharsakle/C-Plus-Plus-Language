//Q.1 Write A Program To Create A Class To Read And Add Two Distances.
#include<iostream>
using namespace std;

class feet
{
	public :
	int feet1,inch1,feet2,inch2;
	 
void input()	
{
	cout<<"enter the feet1: ";
	cin>>feet1;
	
	cout<<"enter the inch1: ";
	cin>>inch1;
	
	cout<<"enter the feet2: ";
	cin>>feet2;
	
	cout<<"enter the inch2: ";
	cin>>inch2;
	
	feet1=feet1+(inch1/12);
	inch1=inch1%12;
	
	feet2=feet2+(inch2/12);
	inch2=inch2%12;
	
	cout << endl << "Feet : " << feet1+feet2;
	cout << endl << "Inches : " << inch1+inch2;
}
	
};

int main()
{
	feet f1;
	f1.input();
	return 0;
}
