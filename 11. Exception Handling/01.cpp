//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter
#include<iostream>
using namespace std;

void division()
{
	int a,b;
	
	cout << "Enter A : ";
	cin >> a;
	
	cout << "Enter B : ";
	cin >> b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout << "Division : " << a/b;
		}
	}
	catch(int a)
	{
		cout << b << " Dose't Division";
	}
}

void voting()
{
	int age;
	
	cout << "\nEnter Your Age : ";
	cin >> age;
	
	try
	{
		if(age<18)
		{
			throw age;
		}
		else
		{
			cout << "You Are Able To Vote";
		}
	}
	catch(int age)
	{
		cout << "You Are Not Able To Vote";
	}
}
void password()
{
	int i,check=0;
	string pass;
	
	cin.ignore();
	cout << "\nEnter Your Password : ";
	getline(cin,pass);
	
	int len = pass.length();
	
	for(i=0; i<=len; i++)
	{
		if(pass[i]>='A' && pass[i]<='Z')
		{
			check++;
		}
	}
	
	try
	{
		if(check>0)
		{
			throw ck;
		}
		else
		{
			cout << "Your Are Not Password Are Correct";
		}
	}
	catch(...)
	{
		cout << "Your Are Password Are Correct";
	}
}
int main()
{
	division();
	voting();
	password();
}
