#include<iostream>
using namespace std;
        int ins=0;

void pattern20(int rows){
    for(int i=0;i<rows;i++){
       for(int j=1;j<=rows-i;j++){//stars
        cout<<"#";
       }
       for(int j=0;j<ins;j++){//spaces
        cout<<" ";
       }
       for(int j=1;j<=rows-i;j++){
        cout<<"#";
       }
       ins+=2;
       cout<<endl;

    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern20(i);
}