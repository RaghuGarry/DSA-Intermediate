/*
Below 25-F
25 to 44-E
45 to 49-D
50 to 59-C
60 to 79-B
80 to 100-A
*/
//Naive Approach
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    if(marks>=25 && marks<=44){
        cout<<"E";
    }
    if(marks>=45 && marks<=49){
        cout<<"D";
    }
    if(marks>=50 && marks<=59){
        cout<<"C";
    }
    if(marks>=60 && marks<=79){
        cout<<"B";
    }
    if(marks>=80 && marks<=100){
        cout<<"A";
    }
}
//For the given marks if checks all the if conditions
//even if one get satisfied

