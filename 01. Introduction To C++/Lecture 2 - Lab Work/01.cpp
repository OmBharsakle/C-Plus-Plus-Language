//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
#include <iostream>
using namespace std;

class Ers 
{
	public:
    int empId, empAge, empSalary, empExperience;
    string empName, empRole, empCity, empCompanyName;
};

int main() 
{
	
    Ers c[5];
    
    int i;

    for (i=0; i<5; i++) 
	{
        cout << "\nEnter Full Name: ";
        getline(cin, c[i].empName);

        cout << "Enter ID: ";
        cin >> c[i].empId;
        cin.ignore(); 

        cout << "Enter Age: ";
        cin >> c[i].empAge;
        cin.ignore();

        cout << "Enter Experience: ";
        cin >> c[i].empExperience;
        cin.ignore();

        cout << "Enter Salary: ";
        cin >> c[i].empSalary;
        cin.ignore();

        cout << "Enter Role: ";
        getline(cin, c[i].empRole);

        cout << "Enter City Name: ";
        getline(cin, c[i].empCity);

        cout << "Enter Company Name: ";
        getline(cin, c[i].empCompanyName);
    }

    cout << "\nEmployee Records \n";
    
    for (i=0; i<5; i++) 
	{
        cout << "\nName: " << c[i].empName;
        cout << "\nID: " << c[i].empId;
        cout << "\nAge: " << c[i].empAge;
        cout << "\nExperience: " << c[i].empExperience;
        cout << "\nSalary: " << c[i].empSalary;
        cout << "\nRole: " << c[i].empRole;
        cout << "\nCity: " << c[i].empCity;
        cout << "\nCompany Name: " << c[i].empCompanyName << "\n";
    }
}

