#include<iostream>
using namespace std;

class AllData
{
	
	
	int inum,iq,price,dis;
	string iname;
	
	public :
		
	int id,pass;
		
	void password()
	{
		cout << "Enter Your Id Number : ";
		cin >> id;
	
		cout << "Enter Your Password : ";
		cin >> pass;
	}
	
	void inputuser()
	{
		cout << "Enter Your Item Number : ";
		cin >> inum;
	
		cout << "Enter Your Item Name : ";
		cin >> iname; 
	
		cout << "Enter Item Quantity : ";
		cin >> iq;
	
		cout << "Enter The Item Price : ";
		cin >> price;
	
	    cout << "Enter The iTEM discount ";
		cin >> dis;
	}
	
	void useroutput()
	{
		cout << "Item Name : " << iname << endl;
		cout << "Item Id : " << inum << endl;
		cout << "Item Quantity : " << iq << endl;
		cout << "Item Price : " << price << endl;
		cout << "Item Discount : " << dis << endl;
	}
	
};

int main ()
{
	AllData a;
	
	a.password();
	a.inputuser();
	a.useroutput();
	
	int id1,pass1;
	
	retry :
	
	cout << "Enter Your Last Id : ";
	cin >> id1;
	
	cout << "Enter Your Last : ";
	cin >> pass1;
	
	if(id1==a.id && pass1==a.pass)
	{
		cout << "Thanks ";
	}
	else 
	
	goto retry;
	
	return 0;
}
