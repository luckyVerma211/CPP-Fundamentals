#include<iostream>
using namespace std;
struct Date{
    int day,month,year;
};
struct student{
    int rno;
    char name[40];
    int cls,marks;
    Date dob,doj;
};
int main(){
    int n;
    student A[n];
    cout<<"Enter the number of student:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the Roll no of Student "<<i+1<<":";
        cin>>A[i].rno;
        cout<<"Enter the Name of Student "<<i+1<<":";
        cin>>A[i].name;
        cout<<"Enter the Class of Student "<<i+1<<":";
        cin>>A[i].cls;
        cout<<"Enter the Marks of Student "<<i+1<<":";
        cin>>A[i].marks;
        cout<<"Enter the Date of birth(day month year):";
        cin>>A[i].dob.day>>A[i].dob.month>>A[i].dob.year;
    }
    cout<<endl;
    cout<<"\t"<<"THE RESULT"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i].name<<" has Scored "<<A[i].marks<<"\t Date of Birth:"<<A[i].dob.day<<"-"<<A[i].dob.month<<"-"<<A[i].dob.year<<endl;
    }
    return 0;
}