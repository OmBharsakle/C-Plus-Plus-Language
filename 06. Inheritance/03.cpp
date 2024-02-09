#include<iostream>
using namespace std;

class A
{
	protected :
		int a=10;
};
class B
{
	protected :
		int a=100;
};
class C : public A,public B
{
		public:
		void print()
		{
			cout << A::a << endl << B::a ;
		}
		
};
main ()
{
	C a;
	
	a.print();
}
