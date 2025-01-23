/* A
   AB
   ABC
   ABCD
*/

#include<iostream>
using namespace std;
void pattern13(int rows){
    for(int i=1;i<=rows;i++){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern13(i);
}