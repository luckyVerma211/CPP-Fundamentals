#include<iostream>
using namespace std;
struct Product{
    char name[40];
    int cost,qty,amount;
};
int main(){
    int n,total=0;
    Product P[n];
    cout<<"Enter the number of product to be entered:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the name of Product "<<i+1<<":";
        cin>>P[i].name;
        cout<<"Enter the cost of Product "<<i+1<<":";
        cin>>P[i].cost;
        cout<<"Enter the quantity of Product "<<i+1<<":";
        cin>>P[i].qty;
        P[i].amount=P[i].cost*P[i].qty;
        total+=P[i].amount;
    }
    cout<<endl;
    cout<<"\t\t"<<"THE BILL"<<endl;
    cout<<endl;
    cout<<"Sno"<<"\t"<<"PRODUCT"<<"\t"<<"COST"<<"\t"<<"QTY"<<"\t"<<"AMOUNT"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<"\t"<<P[i].name<<'\t'<<P[i].cost<<"\t"<<P[i].qty<<"\t"<<P[i].amount<<endl;
    }
    cout<<endl;
    cout<<"The total bill is:"<<total<<endl;
    return 0;
}
