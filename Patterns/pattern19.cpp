#include<iostream>
using namespace std;
void pattern19(int row){
    char ch='E';
    for(int i=0;i<row;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
     cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern19(i);
}