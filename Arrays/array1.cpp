/*  data_type name[size];---> Syntax
    if we define an array inside a func all the elements
    are filled with garbage value
    if we define an array outside the main func(Globally)
    elements are filled with 0

    max size of an array if we declre inside the main--> 10^6
    max size of an array if we declre outside the main--> 10^7
    Array indexes start with 0 to (size-1)--> Total no of ele -1
    --> for(int i=0;i<n;i++){
         cout<<arr[i];
    }
      BruteForce->Better->Optimal
*/
//Find the largest ele in the array
//Brute Force---> Sort the array-->O(nlogn)     
//Better Soln--> None(in this example)
//Optimal S0ln-->O(n)
#include<iostream>
using namespace std;
void biggest(int arr[],int a){
    int big=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>big){
            big=arr[i];
        }
    }
    cout<< big;

}

int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    biggest(lit,size);
}