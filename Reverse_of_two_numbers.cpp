#include<iostream>
using namespace std;
int main()
{
    int a,b;
    //reverse of numbers
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The first number is:"<<a<<endl;
    cout<<"The first number is:"<<b;
    return 0;
}
