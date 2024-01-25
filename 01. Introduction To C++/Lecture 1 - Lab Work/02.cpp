//Q.2 Write A Program To Find Leap Years Between Two Given Numbers And Store Them In An Array.

#include <iostream>
using namespace std;

main() 
{
	
    int start,end,c=0,j=0,i;

    cout << "Enter Start Year : ";
    cin >> start;

    cout << "Enter End Year : ";
    cin >> end;
    
    for (i=start; i<=end; i++) 
	{
        if(i%4==0) 
		{
            c++;
        }
    }
    
    int leap[c];
    
    for (i=start; i<=end; i++) 
	{
        if(i%4==0) 
		{
			leap[j]=i;
            j++;
        }
    }
        
    cout << start << " To " << end << " Between Leap Year's : " << c ;
    
    cout << "\nBelow Are Leap Year's \n";
    
    for (i=0; i<c; i++) 
	{
        cout << leap[i] << " ";
    }
    
}

