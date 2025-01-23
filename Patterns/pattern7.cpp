/*  $
   $$$  there is 2 for loops inside the outer for loop
  $$$$$  Note that the 2 inner for loops are not nested
 
*/

#include<iostream>
using namespace std;
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-(i+1));j++){//Front apaces
            cout<<" ";
        }
        for(int z=0;z<2*i+1;z++){//For $
            cout<<"$";
        } 
        cout<<endl;
    }


}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern7(i);
}