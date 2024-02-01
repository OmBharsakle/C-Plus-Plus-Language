//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
#include<iostream>
using namespace std;
class Hotel
{
	int hotel_id,hotel_staff_quantity,hotel_room_quantity,hotel_rating;
	string hotel_location,hotel_type;
	static string hotel_name;
	static int hotel_establish_year;
	
	public :
	void input()
	{
		cout << "Enter Hotel Id : ";
		cin >> hotel_id;
		cout << "Enter Staff Quantity : ";
		cin >> hotel_staff_quantity;
		cout << "Enter Hotel Room Ruantity : ";
		cin >> hotel_room_quantity;
		cout << "Enter Hotel Rating : ";
		cin >> hotel_rating;
		cout << "Enter Hotel Location : ";
		cin >> hotel_location;
		cout << "Enter Hotel Type : ";	
		cin >> hotel_type;
	}
	
	void output()
	{
		cout << endl << "" << hotel_name << endl;
		cout << "----------------------------"<< endl;
		cout << "Hotel Id : " << hotel_id<< endl; 
		cout << "Staff Quantity : " << hotel_staff_quantity<< endl;
		cout << "Hotel Room Ruantity : " << hotel_room_quantity<< endl; 
		cout << "Hotel Rating : " << hotel_rating<< endl;
		cout << "Hotel Location : " << hotel_location<< endl; 
		cout << "Hotel Type : " << hotel_type<< endl;
	}
};  

string Hotel::hotel_name = "Omg Premium Hotels";
int Hotel::hotel_establish_year = 2018;

int main()
{
	Hotel h[2];
	int i;
	for(i=0; i<2; i++)
	{
		h[i].input();
	}
	for(i=0; i<2; i++)
	{
		h[i].output();
	}
}

