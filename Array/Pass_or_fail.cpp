#include<iostream>
using namespace std;
int main(){
    int Name[100],Roll[100],Percentage[100],n;
    char Res[100];
    int pass=0,fail=0;
    cout<<"Enter the number of student :";
    cin>>n;
    for(int i=0;i<n;i++){
        int roll=i+1;
        Roll[i]=roll;
        cout<<"Enter the marks(out of 500) of roll no is."<<roll<<":";
        cin>>Name[i];
        float per=Name[i]*0.2;
        Percentage[i]=per;
        if(per>=50.0){
           Res[i]='Pass';
           pass++;
        }
        else{
           Res[i]='Fail';
           fail++;
        }
    }
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tTHE RESULT"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"Roll No"<<"\t\t"<<"Total Marks"<<"\t"<<"Percentage"<<"\t"<<"Result"<<endl;
    for(int i=0;i<n;i++){
        cout<<Roll[i]<<"\t\t"<<Name[i]<<"\t\t"<<Percentage[i]<<"\t\t"<<Res[i]<<endl;
    }
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"The number of student passed is:"<<pass<<endl;
    cout<<"The number of student failed is:"<<fail<<endl;
    return 0;
}