/*  12345
    1234
    123
    12
    1
*/

#include<iostream>
using namespace std;
void pattern6(int n){
    for(int i=n;i>=1;i--){
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
    pattern6(i);
}