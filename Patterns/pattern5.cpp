/* !!!!!
   !!!!
   !!!   observe that the inner and outer for loop 
   !!    value is dec by 1
   !
*/
#include<iostream>
using namespace std;
void pattern5(int row){
    for (int i=row;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"!";
        }
        cout<<endl;
    }
}
int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern5(i);
}