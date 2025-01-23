#include<iostream>
using namespace std;
void pattern18(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-(i+1);j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<= breakpoint) ch+=1;
            else ch-=1;
        }
      cout<<endl;
    }
}

int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern18(i);
}