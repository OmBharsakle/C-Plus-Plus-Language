#include<iostream>
using namespace std;

class Diamond
{
	int comp_id,comp_staff_quantity,comp_import_raw_diamonds,comp_export_diamonds;
	long long int comp_revenue;
	string comp_name,comp_ceo;
	
	public:
	Diamond(int id,int st_quantity,int revenue,int imp_d,int exp_d,string ceo,string name)
	{
		comp_id = id;
		comp_name = name;
		comp_staff_quantity = st_quantity;
		comp_revenue = revenue;
		comp_import_raw_diamonds = imp_d;
		comp_export_diamonds = exp_d;
		comp_ceo = ceo;
	}
	
	void output(int i)
	{
		cout << endl << "The Company " << i+1 << "details are below : " << endl;
		cout << "Comp_id : " << comp_id << endl;
		cout << "Comp_name : " << comp_name << endl;
		cout << "Comp_staff_quantity : " << comp_staff_quantity << endl;
		cout << "Comp_revenue : " << comp_revenue << endl;
		cout << "Comp_import_raw_diamonds : " << comp_import_raw_diamonds << endl;
		cout << "Comp_export_diamonds : " << comp_export_diamonds  << endl;
		cout << "Comp_ceo : " << comp_ceo  << endl;
	}
};

int main()
{
	int n=1,i;
	int id,st_quantity,revenue,imp_d,exp_d;
	string ceo,name;
	
	cout << "Enter the number of companys : ";
	cin >> n;
	
	Diamond a[n] = Diamond(id,st_quantity,revenue,imp_d,exp_d,ceo,name);
	
	for(i=0; i<n; i++)
	{
		cout << endl << "Enter the company " << i+1  << endl;
		cout << "------------------------------" << endl;
  		cout << "Enter the company id : ";
		cin >> id;
		cin.ignore();
		
		cout << "Enter the company name : ";                                               
		getline(cin, name);
		
		cout << "Enter the company staff quantity : ";
		cin >> st_quantity;
		cin.ignore();
		
		cout << "Enter the company revenue per year : ";
		cin >> revenue;
		cin.ignore();
		
		cout << "Enter the number of diamonds which are import  : ";
		cin >> imp_d;
		cin.ignore();
		
		cout << "Enter the number of diamonds which are export  : ";
		cin >> exp_d;
		cin.ignore();
		
		cout << "Enter the company ceo name : ";
		getline(cin, ceo);
		
		a[i] = Diamond(id,st_quantity,revenue,imp_d,exp_d,ceo,name);
	}
	for(i=0; i<n; i++)
	{
		a[i].output(i);
	}
	
 	return 0;
}
