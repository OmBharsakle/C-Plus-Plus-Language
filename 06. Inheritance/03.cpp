//Q.2 Write A Program To Demonstrate The Use Of A Scope Resolution Operator To Solve Ambiguity Errors.
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
