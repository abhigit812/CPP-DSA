#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the value of m and n"<<endl;
    cin>>n>>m;
    int arr[n],brr[m];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the elements"<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < m; i++)
    {
         cout<<"Enter the elements"<<endl;
        cin>>brr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum=sum+brr[i];
    }
    cout<<"The sum is "<<sum<<endl;


 return 0;
}