#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a lowercaseletter"<<endl;
    ch=cin.get(); //Reads a single line character including whitespaces
    ch=toupper(ch);//CC type library for chracter conversion
    cout<<ch<<endl;
 return 0;
}