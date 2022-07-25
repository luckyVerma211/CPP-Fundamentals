#include<iostream>
using namespace std;
int main()
{
    int a,b,c,res;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    //using ternary operator
    res=(a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"The greatest number is:"<<res;
}