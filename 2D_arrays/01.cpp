#include<iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int m,n;
    cout<<"Enter the value of m"<<endl;
    cin>>m;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<"Enter the element"<<endl;
            cin>>arr[i][j];
        }
        
    }
    
    for (int i = 0; i < m; i++) //For rows
    {
        for (int j = 0; j<n; j++) // For columns
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;//So that next line can be targeted  and row can be filled 
    }
    

 return 0;
}