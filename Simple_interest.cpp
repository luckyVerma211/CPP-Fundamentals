#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"Enter the principal:";
    cin>>p;
    cout<<"Enter the rate of interest:";
    cin>>r;
    cout<<"Enter the time period:";
    cin>>t;
    si=p*r*t/100;
    cout<<"The Simple interest is:"<<si;
    return 0;
}    


