#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the value of m"<<endl;
    cin>>m;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>arr[m][n];
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<arr[m][n];
        }
        
    }
    

 return 0;
}