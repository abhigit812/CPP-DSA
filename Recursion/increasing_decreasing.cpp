#include<iostream>
using namespace std;
void decrease(int n){
    //base case
    if(n==0){
        return;
    }
    //towards the base case
    cout<<n<<",";
    decrease(n-1);
}
void increase(int n){
    //base case
    if(n==0){
        return;
    }
    //towards the base case
    increase(n-1);
    cout<<n<<",";
    
}
  

    
int main()
{
    int n; 
    cin>>n;
    decrease(n);
    cout<<endl;
    increase(n);
 return 0;
}