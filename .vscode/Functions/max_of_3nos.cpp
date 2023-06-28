#include<iostream>
using namespace std;
int max(int a, int b, int c){
    if (a>b&& a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else if (c>b && c>a)
    {
        return c;
    }
    
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int result= max(a,b,c);
    cout<<"The max of 3 nos is "<<result;
 return 0;
}