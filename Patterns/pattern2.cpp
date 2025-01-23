/* $
   $$
   $$$  For ith row we print i times $
   $$$$
   $$$$$
*/

#include<iostream>
using namespace std;
void pattern2(int rows){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"$";
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern2(i);
}