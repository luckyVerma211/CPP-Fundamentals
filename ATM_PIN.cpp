#include<iostream>
using namespace std;
int main(){
    int password,turn;
    cout<<"............WELCOME TO ATM............"<<endl;
    for(turn=1; turn<=3; turn++){
        cout<<"Enter the PIN:";
        cin>>password;
        if(password==1221){
            cout<<"WELCOME!!"<<endl;
            break;
        }
        else if(turn<3){
            cout<<"Incorrect PIN!!, Try again"<<endl;
        }
    }
    if(turn>3){
        cout<<"Maximum Limit Exceeds!! Acess Denied......."<<endl;
    } 
}
