#include<iostream>
using namespace std;
struct Employee{
    int empid;
    char name[30];
    int salary;
};
void input(Employee &x){
    cout<<"Enter Employee ID, Name and Salary :";
    cin>>x.empid>>x.name>>x.salary;
}
void display(Employee x){
    cout<<"ID :"<<x.empid<<" Name :"<<x.name<<" Salary :"<<x.salary<<endl;
}
int main(){
    Employee E[30];
    int n;
    cout<<"Enter the number of employee";
    cin>>n;
    for(int i=0;i<n;i++){
        input(E[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        display(E[i]);
    }
    return 0;
}