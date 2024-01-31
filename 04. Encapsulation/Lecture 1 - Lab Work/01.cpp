//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
#include<iostream>
using namespace std;
class Student
{
	int stu_id,stu_age;
	string stu_course,stu_city,stu_email,stu_college,stu_name;
	
	public :
	void input()
	{
		cout << "\nEnter The Student Name : ";
		getline(cin,stu_name);
		
		cout << "Enter Your Id : ";
		cin >> stu_id;
		cin.ignore(); 
		
		cout << "Enter Your Age :";
		cin >> stu_age;
		cin.ignore(); 
		
		cout << "Enter Your Email : ";
		getline(cin,stu_email);
		
		cout << "Enter Your City : ";
		getline(cin,stu_city);
		
		cout << "Enter Your Course : ";
		getline(cin,stu_course);
		
		cout << "Enter Your Collage Name : ";
		getline(cin,stu_college);
					
	}
	
	void output()
	{
		cout << "\nName       : " << stu_name << endl;
		cout << "Id           : " << stu_id << endl;
		cout << "Age          : " << stu_age << endl;
		cout << "Email        : " << stu_email << endl;
		cout << "City         : " << stu_city << endl;
		cout << "Course       : " << stu_course << endl;
		cout << "Collage Name : " << stu_college << endl;
	}
	 	
};
main()
{
	Student s[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		s[i].input();
	}
	for(i=0; i<2; i++)
	{
		s[i].output();
	}
	
}
