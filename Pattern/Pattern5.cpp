/*
1
01
101
0101
10101  */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            int d=j%2;
            cout<<d;
        }
        cout<<endl;
    }
    return 0;
}