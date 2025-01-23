/*  ABCDE
    ABCD
    ABC
    AB
    A
*/

#include<iostream>
using namespace std;
void pattern14(int rows){
    for(int i=0;i<rows;i++){
        for(char j='A';j<='A'+(rows-i-1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern14(i);
}