/* @@@@ 4 num of rows
   @@@@ At every row we are printing 4 @
   @@@@ The no of @ in a row is equal to the number of rows
   @@@@ A square pattern
*/
#include<iostream>
using namespace std;
void pattern1(int size){
    for(int i=0;i<size;i++){//for every i,j is running 0 1 2 3-->4 times 
        for(int j=0;j<size;j++){//number of rows
            cout<<"@";
        }
        cout<<endl;//bcoz when for i=0, j runs 4 times 
        //that is after printing a row it has to go another line
    }
}
int main(){
    int a;
    cout<<"Enter the a num: ";
    cin>>a;
    pattern1(a);

}
