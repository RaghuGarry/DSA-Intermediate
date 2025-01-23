/*       A
        ABC
       ABCDE
      ABCDEFG
*/
#include<iostream>
using namespace std;
void pattern17(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-(i+1);j++){
            cout<<" ";
        }
        char ch='A';
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            ch+=1;
        }
      cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern17(i);
}