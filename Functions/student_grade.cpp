#include<iostream>
using namespace std;
char grade(int n){
    if (n>=90)
    {
        return 'O'; //Single quotes are used for characters and double quotes are used for String
    }
    
    else if (n>=80)
    {
        return 'E';
    }
    
    else if (n>=70)
    {
        return 'A';
    }
    
    else if (n>=60)
    {
        return 'B';
    }
    
    else if (n<=50)
    {
        return 'F';
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    char result=grade(n);
    cout<<result;
 return 0;
}