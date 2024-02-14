//1 Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and
//rectangle, that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle, and then call the area()
//function using these two objects.

#include<iostream>
using namespace std;

class Input
{
	protected :	
    int height,width;
    float ans;
	
	Input()
	{
		cout << "Enter The Height : ";
		cin >> height;	
		
		cout << "Enter The Width : ";
		cin >> width;
	}	
};

class Triangle : public Input
{
	public :
		
	void triangle()
	{
		ans = ( height * width ) * 1/2;
		cout << "The Area Of Triangle : " << ans << endl << endl;
	}
	
};


class Rectangle : public Input
{		
	public :	
	
		void rectangle()
		{
			ans = ( height * width );
			cout << "The Area Of Rectangle : " << ans;
		}
};

int main()
{
	
	Triangle t;
	Rectangle r;
	
	t.triangle();
	r.rectangle();
	
	
	return 0;
}

