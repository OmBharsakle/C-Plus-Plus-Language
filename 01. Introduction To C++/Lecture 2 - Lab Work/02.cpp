//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
#include <iostream>
using namespace std;

class Ers 
{
	public:
    int car_id,car_release_year;
    string car_model,car_color,car_company_name;
};

int main() {
	
    Ers e[5];
    int i;

    for (i=0; i<5; i++) 
	{
        cout << "\nEnter Car Company Name : ";
        getline(cin, e[i].car_company_name);

        cout << "Enter Car ID : ";
        cin >> e[i].car_id;
        cin.ignore(); 

        cout << "Enter Car Release Year : ";
        cin >> e[i].car_release_year;
        cin.ignore();

        cout << "Enter Car Model : ";
        cin >> e[i].car_model;
        cin.ignore();

        cout << "Enter Car Color : ";
        cin >> e[i].car_color;
        cin.ignore();

    }

    cout << "\nCar's Records\n";
    
    for (i=0; i<5; i++) 
	{
        cout << "\nCar Copany Name : " << e[i].car_company_name;
        cout << "\nCar ID : " << e[i].car_id;
        cout << "\nCar Release Year : " << e[i].car_release_year;
        cout << "\nCar Model : " << e[i].car_model;
        cout << "\nCar Color : " << e[i].car_color << "\n";
    }
}

