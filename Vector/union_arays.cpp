#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int size1,size2,size3;
    cout<<"Enter the size of arr"<<endl;
    cin>>size1;
    cout<<"Enter the size of brr"<<endl;
    cin>>size2;
    size3=size1+size2;
    vector<int>arr(size1);
    vector<int>brr(size2);
     vector<int>ans(size3);
    cout<<"Enter the elements of arr"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the elements of brr"<<endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cin>>brr[i];
    }
   
    for (int i = 0; i <size1; i++)
    {
            ans.insert(ans.begin(),arr[i]);
    }
    

    for (int i = 0; i <size2; i++)
    {
        ans.insert(ans.begin()+(size3-size1),brr[i]);
    }
    for (int i = 0; i < size3; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
 return 0;
}