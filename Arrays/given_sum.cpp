#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum,count=0;
    cout<<"Enter the sum"<<endl;
    cin>>sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==sum){
                count++;
            }
        }
        
    }
    cout<<"The total no of pairs is "<<count<<endl;

 return 0;
}