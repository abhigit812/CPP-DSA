#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,60,70};
    int size=6;
    int start=0; //Refer notes for explanation(Two pointer approach)
    int end=size-1;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end--;
        if (start>end)
        {
            break;
        }
        
    }
    

 return 0;
}