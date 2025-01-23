//switch stmt
//Take ip.. and pront the day 
//For 1-> Monday,...7->Sunday
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the day: ";
    cin>>day;
    switch(day){//Whatever your are taking the num on that we have to write sitch
        case 1:{
            cout<<"Monday\n";
            break;
        }
        case 2:{
            cout<<"Tuesday\n";
            break;

        }
        case 3:{
            cout<<"Wedesday\n";
            break;
        }
        case 4:{
            cout<<"Thursday\n";
            break;//Without break if one condition satisfies it goes to end 
            //executiong all the mext stmts
        }
        case 5:{
            cout<<"Friday\n";
            break;//with break we can break the contrl
        }
        case 6:{
            cout<<"Saturday\n";
            break;//After getting excted by one case
            //after hitiing the break the contrl will come 
            //outside the switch completely
        }
        case 7:{
            cout<<"Sunday\n";
            break;
        }
        default:{
            cout<<"Plz enter a valid day"<<"\n";
            break;//executes only if 
            //none of the case get executed 
            //default do need a break stmt.
            //out of the switch once it is executed
        }
        cout<<"Still Inside";
    }
    cout<<"Just came out";
}

