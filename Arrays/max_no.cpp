#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,97,9,54};
    int size=4;
    int maxNo;
    for (int i = 0; i < size; i++)
    {
        if (arr[0]>arr[1])
        {
            maxNo=arr[0];
        }
        else if (arr[1]>arr[2])
        {
            maxNo=arr[1];
        }
        else if (arr[2]>arr[3])
        {
            maxNo=arr[2];
        }
        else if (arr[3]>arr[4])
        {
            maxNo=arr[4];
        }
        else{
            maxNo=arr[4];
        }
    
    }
    cout<<maxNo;
    
 return 0;
}