/* 1      1
   12    21
   123  321
   12344321
*/
#include<iostream>
using namespace std;
void pattern11(int rows){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){//for printing lhs num
            cout<<j;
        }
        for(int z=1;z<=2*(rows-i);z++){//for spaces
            cout<<" ";
        }
        for(int k=i;k>=1;k--){//again numbers
            cout<<k;
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern11(i);
}