#include<iostream>
using namespace std;
union Incentive{
    int overtime;
    float comm;
    int equity;
};
int main(){
    Incentive A;
    cout<<"Enter overtime:";
    cin>>A.overtime;
    cout<<"Overtime earned is:"<<A.overtime<<endl;
    return 0;
}
