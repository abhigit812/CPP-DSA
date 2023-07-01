#include<iostream>
using namespace std;
int main()
{
     int arr[500];
    int n; // Taking size as input
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    cout<<"Enter the numbers "<<endl;
    for (int i = 0; i < n; i++) //Taking input of array data
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) //Printing doubles
    {
        cout<<2*arr[i]<<" ";
    }
    
   

 return 0;
}