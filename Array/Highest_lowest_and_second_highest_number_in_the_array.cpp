#include<iostream>
using namespace std;
int main(){
    int A[100],n;
    cout<<"Enter the number of element in the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    int max=A[0],min=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>max)
           max=A[i];
        if(A[i]<min)
           min=A[i];
    }
    int smax=A[0];
    for(int i=0;i<n;i++){
        if(A[i]!=max && A[i]>smax)
           smax=A[i];
    }
    cout<<"The array is:";
    for(int i=0;i<n;i++)
       cout<<A[i]<<" ";
    cout<<endl;
    cout<<"The highest number in the array is:"<<max<<endl;
    cout<<"The lowest number in the array is:"<<min<<endl;
    cout<<"The second highest number in the array is:"<<smax<<endl;
    return 0;
}