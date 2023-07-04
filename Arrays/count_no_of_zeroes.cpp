#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,1,1,0,0,0,1,0,0,1};
    int size=11; //We have to mention the size of arrays 
    int numZero=0;//Before counting all are zeroes
    int numOne=0;
    for (int i = 0; i <size; i++)
    {
        if (arr[i]==0)
        {
            numZero++;
        }
        if (arr[i]==1)
        {
            numOne++;
        }
       
    }
     cout<<"The no of zeroes are "<<numZero<<endl;
     cout<<"The no of ones are "<<numOne<<endl;

 return 0;
}