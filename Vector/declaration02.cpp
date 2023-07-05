#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //10 is the size ,1 is the element we want in all the array location
    vector<int>arr(10,1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
 return 0;
}