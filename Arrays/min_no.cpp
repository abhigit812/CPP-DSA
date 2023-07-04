#include<iostream>
#include<limits.h>
using namespace std;
int main()
{ 
    int arr[]={1,255,243,266,13};
    int size=5;
    //Initialize mini with maximum possible integer value
    int mini=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<mini)
        {
            // If found a no greater than maxi update maxi 
            mini=arr[i];
        }
        
    }
    cout<<"The minimum no is "<<mini;
 return 0;
}