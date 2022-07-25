#include<iostream>
using namespace std;
int main()
{
    int m,s,res;
    cout<<"Enter the marks of Mathematics:";
    cin>>m;
    cout<<"Enter the marks of Science:";
    cin>>s;
    res= (m>=95) || (s>=95);
    (res==1)?cout<<"!! SCHOLARSHIP GRANTED !!":cout<<"): SCHOLARSHIP NOT GRANTED :(";
    return 0;
}