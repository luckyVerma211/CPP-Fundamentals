#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the coefficient of x^2:";
    cin>>a;
    cout<<"Enter the coefficient of x:";
    cin>>b;
    cout<<"Enter the constant:";
    cin>>c;
    int d = (b*b)-(4*a*c);
    if(d<0){
        cout<<"No real roots!!";
    }
    else if(d==0){
        cout<<"The equation has equal roots"<<endl;
        float r1=-b/(2*a);
        cout<<"The roots are "<<r1<<r1<<endl;
    }
    else{
        cout<<"The equation has distinct roots"<<endl;
        float r1=(-b-sqrt(d))/(2*a);
        float r2=(-b+sqrt(d))/(2*a);
        cout<<"The roots are "<<r1<<r2<<endl;
    }
    return 0;
}