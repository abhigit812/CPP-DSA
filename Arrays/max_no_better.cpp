#include<iostream>
#include<limits.h>
using namespace std;
int main()
{ 
    int arr[]={1,255,243,266,13};
    int size=5;
    //Initialize maxi with minimum possible integer value
    int maxi=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>maxi)
        {
            // If found a no greater than maxi update maxi 
            maxi=arr[i];
        }
        
    }
    cout<<"The maximum no is "<<maxi;
 return 0;
}