#include<iostream>
using namespace std;
int main()
{
    int a,b,c,res;
    cout<<"Enter the first side:";
    cin>>a;
    cout<<"Enter the second side:";
    cin>>b;
    cout<<"Enter the third third:";
    cin>>c;
    res=(a==b)&&(b==c)&&(a==c);
    (res==1)?cout<<"The triangle is Equilateral!!":cout<<"The triangle is not Equilateral!!";
    return 0;
}