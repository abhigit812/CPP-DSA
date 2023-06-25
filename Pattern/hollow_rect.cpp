#include<iostream>
using namespace std;
int main(){
    int rowcount,colcount;
    cin>>rowcount>>colcount;
    for (int row = 0; row < rowcount; row+=1){ //For First and last row
        if (row==0 || row==rowcount-1)
            {
                for (int col = 0; col < colcount; col+=1)
                {
                    cout<<"* ";
                }
               
            }
        else{                          //For remaining rows
            cout<<"* ";               //For middle row first star
            for (int i = 0; i < colcount-2; i+=1)
            {
                cout<<"  ";
            }
            cout<<"* ";              //For middle row last star
        }
        cout<<endl;
    }

    }
    
