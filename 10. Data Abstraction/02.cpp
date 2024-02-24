//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to 
//be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class 
//members' values accordingly.
#include<iostream>
using namespace std;

class Employee
{
	protected:	
	int employee_salary;
	public:
		
	void myAccess()
	{
		cout << "\n     Employee" << endl;
		cout << "-----------------" << endl;
		cout << "Company Name Is Tech" << endl;
		cout << "Employee Salary : " << employee_salary << endl;
	}
};

class Manager: public Employee
{
	protected:
	int manager_salary,total_staff;
	string can_terminate;
	public:
		
	void myAccess()
	{
		cout << "\n     Manager" << endl;
		cout << "-----------------" << endl;
		cout << "Company Name Is " << endl;
		cout << "Manager Salary : " << manager_salary << endl;
		cout << "Employee Salary : " << employee_salary << endl;
		cout << "Total Staff : " << total_staff << endl;
		cout << "Terminate : " << can_terminate << endl;
	}
};
class Admin: public Manager
{
	int total_annual_revenue;
	public:
	void setter()
	{
		cout << "Manager Salary : ";
		cin >> manager_salary;
		cout << "Employee Salary : ";
		cin >> employee_salary;
		cout << "Total Staff : ";
		cin >> total_staff;
		cout << "Total Annual Revenue : ";
		cin >> total_annual_revenue;
		cin.ignore();
		cout << "Terminate : ";
		getline(cin,can_terminate);
	}
	void getter()
	{
		cout << "\n     Admin" << endl;
		cout << "-----------------" << endl;
		cout << "Company Name Is " << endl;
		cout << "Manager Salary : " << manager_salary << endl;
		cout << "Employee Salary : " << employee_salary << endl;
		cout << "Total Staff : " << total_staff << endl;
		cout << "Total Annual Revenue : " << total_annual_revenue << endl;
		cout << "Terminate : " << can_terminate << endl;
	}
};


int main()
{
	Admin a1;
	a1.setter();
	a1.getter();
	a1.myAccess();
	a1.Employee::myAccess();
	return 0;
}


