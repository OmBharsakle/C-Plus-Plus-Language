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





//Q.2 Write a Program to make a Supermarket Billing System.
// Requirements:
// (A) User Input:
// Item Number
// Item Name
// Quantity
// Price
// Discount
// (B) Verify User Id And Password
// (C) Display Records:
// All Records
// By Searching Item Number
#include<iostream>
using namespace std;

class AllData
{
	int iq,price,dis;
	string iname;
	
	public :
	
	int inum;
	
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
	
	int id,pass,n,i;
	
	cout << "Enter Your Id Number : ";
	cin >> id;
	
	cout << "Enter Your Password : ";
	cin >> pass;
	
	cout << "Enter Your Product Number : ";
	cin >> n;
	
	AllData a[n];
	
	int arr[n];
	for(i=0; i<n; i++)
	{
		a[i].inputuser();
		arr[i]=a[i].inum;
	}
	
	
	int id1,pass1;
	
	retry :
	
	cout << "Enter Your Last Id : ";
	cin >> id1;
	
	cout << "Enter Your Last : ";
	cin >> pass1;
	
	int choice;
	
	if(id1==id && pass1==pass)
	{
		cout<< "Product Number  : ";
		cin>>choice;
		
		for(i=0;i<n;i++)
		{
	
	    	if(choice == arr[i])
			{
				a[i].useroutput();
			}
			else
			{
				cout<<"-----------------------------------"<<endl;
				cout<<"Enter valid item Number : "<<endl;
						
			}
		
		}
			
	}
	else
	{
	goto retry;
		
	} 
	
	
	return 0;
}
