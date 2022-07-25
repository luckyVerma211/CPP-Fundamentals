#include <iostream>
using namespace std;
int main()
{
    int math,phy,che,cs,eng,tot,per;
    cout<<"Enter the marks of Mathematics(Out of 100):";
    cin>>math;
    cout<<"Enter the marks of Physics(Out of 100):";
    cin>>phy;
    cout<<"Enter the marks of Chemistry(Out of 100):";
    cin>>che;
    cout<<"Enter the marks of Computer Science(Out of 100):";
    cin>>cs;
    cout<<"Enter the marks of English(Out of 100):";
    cin>>eng;
    tot=math+phy+che+cs+eng;
    per=tot*100/500;
    cout<<"The total marks is:"<<tot<<endl;
    cout<<"The percentage is:"<<per<<endl;
    
    return 0;
}