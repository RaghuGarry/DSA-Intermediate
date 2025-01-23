//Better approach
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }//If the marks is <25 the control never goes to none of the below lines
    else if(marks>=25 && marks<=44){
        cout<<"E";
    }
    else if(marks>=45 && marks<=49){
        cout<<"D";
    }
    else if(marks>=50 && marks<=59){
        cout<<"C";
    }
    else if(marks>=60 && marks<=79){
        cout<<"B";
    }
    else if(marks>=80 && marks<=100){
        cout<<"A";
    }
}

//Best approach
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }//If the <25 cond is False then it will definetly >25 So, we dont have to check if marks>=25
    //just we can state the ending condition <=44
    else if(marks<=44){
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"D";
    }
    else if(marks<=59){
        cout<<"C";
    }
    else if(marks<=79){
        cout<<"B";
    }
    else if(marks<=100){
        cout<<"A";
    }
}