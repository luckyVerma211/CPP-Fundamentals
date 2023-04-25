#include<iostream>
using namespace std;
int main(){
    int n,A[100];
    cout<<"Enter the number of element in the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    cout<<"The original list is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    int r=n/2;
    for(int i=0;i<r;i++){
        int temp=A[i];
        A[i]=A[r+i];
        A[r+i]=temp;
    }
    cout<<"The exchanged array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl; 
    return 0;
}
