#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    cout<<"The sum of even nos are"<<endl;;
    for (int i = 1; i<=n; i++)
    {
        sum=sum+i;
       
    }
    cout<<sum;
 
}