#include<iostream>
using namespace std;
struct Employee{
    int empid;
    char name[30];
    int salary;
};
void input(Employee *x){
    cout<<"Enter Employee ID, Name and Salary :";
    cin>>x->empid>>x->name>>x->salary;
}
void display(Employee x){
    cout<<"ID :"<<x.empid<<" Name :"<<x.name<<" Salary :"<<x.salary<<endl;
}
int main(){
    Employee E[30],temp;
    int n;
    cout<<"Enter the number of employee:";
    cin>>n;
    for(int i=0;i<n;i++){
        input(&E[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(E[i].salary<E[j].salary){
                temp=E[i];
                E[i]=E[j];
                E[j]=temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        display(E[i]);
    }
    return 0;
}