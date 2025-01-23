/* A
   BB
   CCC
   DDDD
*/
#include<iostream>
using namespace std;
void pattern15(int size){
    for(int i=0;i<size;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern15(i);
}