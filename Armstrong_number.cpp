#include<iostream>
using namespace std;
int main(){
    int num,a,sum,d;
    cout<<"Enter the number:";
    cin>>num;
    a=num;
    sum=0;
    while(a>0){
        d=a%10;
        sum+=d*d*d;
        a=a/10;
    }
    if(sum==num){
        cout<<num<<" is a Armstrong Number!!"<<endl;
    }
    else{
        cout<<num<<" is not a Armstrong Number!!"<<endl;
    }
    return 0;
}