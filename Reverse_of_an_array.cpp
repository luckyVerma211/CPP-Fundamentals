#include <iostream>
using namespace std;
int main(){
   int n[5],i;
   for(i=0;i<5;i++){
      cout<<"Enter the number:";
      cin>>n[i];
   }
   cout<<"The Array is:"<<endl;
   for(i=0;i<5;i++){
      cout<<n[i]<<"\t";
   }
   cout<<endl;
   cout<<"The reverse of the Array is:"<<endl;
   for(i=4;i>=0;i--){
      cout<<n[i]<<"\t";
   }
   return 0;
}