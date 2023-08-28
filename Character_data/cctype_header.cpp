#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a lowercaseletter"<<endl;
    ch=cin.get();
    ch=toupper(ch);
    cout<<ch<<endl;
 return 0;
}