#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,20,40,60,70};
    int sum=80;
    //Print all pairs
    //Outer loop will traverse for all pairs
    for (int i = 0; i < arr.size(); i++)
    {
        int element=arr[i];
        //For every element loop will traverse on aage wale elements
        for (int j =i+1; j <arr.size(); j++)
        {
            if (element+arr[j]==sum)
            {
                cout<<"Pair found "<<element<<","<<arr[j]<<endl;
            }
            
        }
        
    }
    


 return 0;
}