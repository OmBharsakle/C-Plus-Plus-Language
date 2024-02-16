//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
// Class Cricket -> Class T20Match
// Class Cricket -> Class ODIMatch
// Override the getTotalOvers() method in both classes.
#include<iostream>
using namespace std;
class Cricket 
{
	protected:
		
	int over;
	public:
	void getTotalOvers(int over)
	{
		this->over=over;
		cout<<"Enter Total Over : "<<over<<endl;
	}
};

class T20Match : public Cricket
{
	public:
		
	void getTotalOvers(int over)
	{
		this->over=over;
		cout<<"Total Over Of T20Match : "<<over<<" Over"<<endl;
	}
	
};

class ODIMatch : public Cricket
{
	public:
		
		void getTotalOvers(int over)
		{
			this->over=over;
			cout<<"Total Over Of ODIMatch : "<< over <<" Over";
		}
};

int main()
{
	T20Match t;
	t.getTotalOvers(20);
	
	ODIMatch o;
	o.getTotalOvers(50);
	
	return 0;
}
