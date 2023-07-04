#include<iostream>
using namespace std;

bool find(int arr[],int size,int element){
// Linear search
for (int i = 0; i < size; i++)
{
    if (arr[i] == element)
    {
        return true;
    }
    else{
        return false;
    }
}


}
int main()
{
    int arr[]={1,3,4,6,7};
    int size=5;
    cout<<"Enter the element to find"<<endl;
    int element;
    cin>>element;

    if (find(arr, size, element) )
    {
        cout<<"Element is present"<<endl;
    }
    
    else{
        cout<<"Element is not present";
    }

 return 0;
}