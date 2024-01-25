//Q.1 Write A Program To Find All Even Elements From A Given 1D Array.
#include<iostream>
using namespace std;

main()
{
    int n;
    
    cout <<"Enter The Size Of Array : ";
    cin >> n;
    
    int a[n],i;
    
    for(i=0; i<n; i++)
    {
        cout << "Array [" << i << "] : ";
        cin >> a[i];
    }
    
    cout << "All Even Elements : ";
    
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            cout << a[i] << " ";
        }
    }
}
