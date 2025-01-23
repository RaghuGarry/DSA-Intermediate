/*    1
      01  for the even rows it starts with 1 
      101   odd rows start with 0
      0101
      10101
*/
#include<iostream>
using namespace std;
void pattern10(int rows){
    int first;
    for(int i=0;i<=rows;i++){
        if(i%2==0){
            first=1;
        }
        else first =0;
        for(int j=0;j<=i;j++){
            cout<<first;
            first=1-first;// Used for changing 0 to 1 and 1 to 0
        }
        cout<<endl;
    }

}
 int main(){
    int i;
    cout<<"Enter the rows: ";
    cin>>i;
    pattern10(i);
}