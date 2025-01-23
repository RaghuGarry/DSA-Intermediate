/* 1
   22  we print the i row with ith num i times
   333
   4444
   55555
*/

#include<iostream>
using namespace std;
void pattern4(int c){
    for(int i=1;i<=c;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern4(i);
}