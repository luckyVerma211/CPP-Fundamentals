#include<iostream>
using namespace std;
struct Date{
    int date,month,year;
};
struct Student{
    int rno;
    char name[50];
    int cls;
    Date dob;
};
int main(){
    Student *S[20];
    int n;
    cout<<"Enter the number of student:";
    cin>>n;
    for(int i=0;i<n;i++){
        S[i]= new Student;
        cout<<"Enter the roll number of student:";
        cin>>S[i]->rno;
        cout<<"Enter the Name of student:";
        cin>>S[i]->name;
        cout<<"Enter the class of student:";
        cin>>S[i]->cls;
        cout<<"Enter the Date of Birth(day month year):";
        cin>>S[i]->dob.date>>S[i]->dob.month>>S[i]->dob.year;
    }
    cout<<endl;
    cout<<"\t\t"<<"Student Record"<<endl<<endl;
    cout<<"RollNo"<<'\t'<<"Name"<<'\t'<<"Class"<<"\t"<<"Date of Birth"<<endl;
    for(int i=0;i<n;i++){
        cout<<S[i]->rno<<'\t';
        cout<<S[i]->name<<'\t';
        cout<<S[i]->cls<<'\t';
        cout<<S[i]->dob.date<<'-'<<S[i]->dob.month<<'-'<<S[i]->dob.year;
        cout<<endl;
    }
    return 0;
}