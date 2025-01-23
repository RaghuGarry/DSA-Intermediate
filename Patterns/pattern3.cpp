/*  1
    12  Simi to pattern2..we have to print the num
    123  for every row we are printing 1->row number
    1234
    12345
*/


#include<iostream>
using namespace std;
void pattern3(int num){
    for (int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern3(i);
}