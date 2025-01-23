/*  %%%%%
     %%%
      %
*/
#include<iostream>
using namespace std;
void pattern8(int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*row-(2*i+1);j++){
            cout<<"%";
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern8(i);
}