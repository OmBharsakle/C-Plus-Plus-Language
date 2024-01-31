//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
#include<iostream>
using namespace std;
class Student
{
	int cust_id,cust_age,cust_simcard_validity;
	string cust_telecom_brand_name,cust_city,cust_mobile_number;

	public :
	void input()
	{
		cout << "\nCustomer Mobile Number : ";
		getline(cin,cust_mobile_number);
		
		cout << "Enter Your Id : ";
		cin >> cust_id;
		cin.ignore(); 
		
		cout << "Enter Your Age : ";
		cin >> cust_age;
		cin.ignore(); 
		
		cout << "Enter Your Simcard Validity : ";
		cin >> cust_simcard_validity;
		cin.ignore();
		
		cout << "Enter Your City : ";
		getline(cin,cust_city);
		
		cout << "Enter Your Telecom Brand Name : ";
		getline(cin,cust_telecom_brand_name);
					
	}
	
	void output()
	{
		cout << "\nName             : " << cust_mobile_number << endl;
		cout << "Id                 : " << cust_id << endl;
		cout << "Age                : " << cust_age << endl;
		cout << "City               : " << cust_city << endl;
		cout << "Simcard Validity   : " << cust_simcard_validity << endl;
		cout << "Telecom Brand Name : " << cust_telecom_brand_name << endl;
	}
	 	
};
main()
{
	Student s[2];
	
	int i;
	
	for(i=0; i<2; i++)
	{
		s[i].input();
	}
	for(i=0; i<2; i++)
	{
		s[i].output();
	}
	
}
