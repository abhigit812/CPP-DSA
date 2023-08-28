#include<iostream>
#include<vector>
using namespace std;
int main()
{   vector<int>ans;
    int arr[]={1,2,3,4,5};
    int size1=5;
    int brr[]={6,7,8};
    int size2=3;
        //inserting elements of arr into vector ans
    for (int i = 0; i < size1; i++)
    {
        ans.push_back(arr[i]);
    }
        //inserting elements of brr into vector ans
    for (int i = 0; i < size2; i++)
    {
        ans.push_back(brr[i]);
    }
    //Printing ans vector
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
 return 0;
}