#include<iostream>
using namespace std;
int GetEvensum(int n){
    int sum=0;
    for (int i = 2; i <=n; i=i+2)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int sum=GetEvensum(n);
    cout<<"The sum of even numbers is "<<sum;
 return 0;
}