#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,60,70,80}; //ODD no of elements present
    int size=7;
    int start=0; //Refer notes for explanation(Two pointer approach)
    int end=size-1;
    for (int i = 0; i < size; i++)
    {
       
        if (start>end)
        {
            break;
        }
        else if (start==end)
        {
            cout<<arr[start]<<" ";
        }
        else{
             cout<<arr[start]<<" ";
             cout<<arr[end]<<" ";
           
        }
        start++;
        end--;
    }
    

 return 0;
}