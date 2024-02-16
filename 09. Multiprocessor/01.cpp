#include<iostream>
using namespace std;

class Message
{
	string msg;
	
	public : 
	
	Message (string msg)
	{
		this->msg=msg;
	}
	
	void print()
	{
		cout << msg << endl;
	}
	
	void print(string NewMessage)
	{
		cout << msg << " " << NewMessage;
	}
};

int main()
{
	Message m("Hello");
	
	m.print();
	
	m.print("OMG");
}
