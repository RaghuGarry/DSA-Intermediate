/* 1
   23
   456
   78910
*/
#include<iostream>
using namespace std;

void pattern12(int rows){
    int num=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern12(i);
}