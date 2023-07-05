#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Create a vector
    vector<int>arr; 
    cout<<"The default size of vector is "<<arr.size()<<endl;
    //INSERTING ELEMENTS 
    arr.push_back(4);
    arr.push_back(6);
    //PRINTING
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After POP Back function ";
    //Last element will be removed
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    



 return 0;
}