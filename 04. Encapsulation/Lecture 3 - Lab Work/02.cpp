#include<iostream>
using namespace std;

class Fastfood
{
	int cafe_id,cafe_rating,cafe_establish_year,cafe_staff_quantity;
	static int i;
	string cafe_name,cafe_type,cafe_location;
	
	public:
		Fastfood()
		{
			cout << endl << "Enter the cafe " << i << " :" << endl;
			cout << "Enter the cafe id : ";
			cin >> cafe_id;
			cin.ignore();
			
			cout << "Enter the cafe name : ";
			getline(cin, cafe_name);
			
			cout << "Enter the cafe type : ";
			getline(cin, cafe_type);
			
			cout << "Enter the cafe rating : ";
			cin >> cafe_rating;
			cin.ignore();
			
			cout << "Enter the cafe location : ";
			getline(cin, cafe_location);
			
			cout << "Enter the cafe establish year : ";
			cin >> cafe_establish_year;
			cin.ignore();
			
			cout << "Enter the cafe staff Quantity : ";
			cin >> cafe_staff_quantity;
			cin.ignore();
			i = i + 1;
		}
		
		void output(int i)
		{
			cout << endl << "The cafe " << i+1 << " details are below"<< endl;
			cout << "------------------------------------------------" << endl;
			cout << "Cafe ID : "  << cafe_id << endl;
			cout << "Cafe Name : "  << cafe_name << endl;
			cout << "Cafe Type : "  << cafe_type << endl;
			cout << "Cafe Rating : "  << cafe_rating << endl;
			cout << "Cafe Location : "  << cafe_location << endl;
			cout << "Cafe Establish Year : "  << cafe_establish_year << endl;
			cout << "Cafe Staff Quantity : "  << cafe_staff_quantity << endl;
		}
};

int Fastfood::i=1;

int main()
{
	int i,n;
	
	cout << "Enter the number of Fast Food cafe : ";
	cin >> n;
	
	Fastfood a[n];
	
	for(i=0; i<n; i++)
	{
		a[i].output(i);
	}	
	
	return 0;
}
