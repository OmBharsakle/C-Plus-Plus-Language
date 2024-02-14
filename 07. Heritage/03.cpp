//3 Write a Program to read and print Employee information with the use of Multilevel inheritance.

#include<iostream>
using namespace std;

class A
{
	protected :
	int emp_id;
	string emp_name,emp_role;

	void setter()
	{	
		cout << "Enter The Employee Name : ";
		getline(cin, emp_name);
			
		cout << "Enter The Employee ID : ";
		cin >> emp_id;
		cin.ignore();
		
		cout << "Enter The Employee Role : ";
		getline(cin, emp_role);
	}
			
};

class B : public A
{
	protected :
	int emp_salary,emp_exp;

	void setter()
	{
		
		cout << "Enter The Employee Salary : ";
		cin >> emp_salary;
			
		cout << "Enter The Employee Work Experience : ";
		cin >> emp_exp;
	}	
};

class C : public B
{
	protected :
	string comp_name,emp_address;

	void setter()
	{	
		
		cin.ignore();
		cout << "Enter The Company Name : ";
		getline(cin, comp_name);
		
		cout << "Enter The Employee Address : ";
		getline(cin, emp_address);
	}
		
	void getter()
	{
		cout << "Employee's Name : " << emp_name << endl;
 		cout << "Employee's Role : " << emp_role << endl;
		cout << "Employee's Salary : " << emp_salary << endl;	
	}		
};

class D : public C
{
	protected :
	string e_mail,emp_contect;

	public :
	void setter()
	{
		A :: setter();
		B :: setter();
		C :: setter();
		cout << "Enter The E-mail id : ";
		getline(cin, e_mail);
		
		cout << "Enter The Employee Contact : ";
		cin >> emp_contect;
	}
	
	void getter()
	{
		cout << "\nEmployee's ID : " << emp_id << endl;
		C :: getter();
		cout << "Employee's Experience : " << emp_exp  << " Year's"<< endl;	
		cout << "Company Name : " << comp_name << endl;
		cout << "Employee's Address : " << emp_address << endl;
		cout << "Employee's E-Mail : " << e_mail << endl;
		cout << "Employee's Contact : " << emp_contect;
	}		
};

int main()
{
	D A;
	A.setter();
	A.getter();

	return 0;
}
