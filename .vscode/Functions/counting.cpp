#include<iostream>
using namespace std;
int counting(int n){
    for (int i = 0; i <n; i++)
    {
        cout<<i<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int result=counting(n);
    cout<<result;
 return 0;
}