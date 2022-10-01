#include <iostream>
using namespace std;
int main(){
   int n[5],i,tot=0;
   for(i=0;i<5;i++){
      cout<<"Enter the number:";
      cin>>n[i];
   }
   for(i=0;i<5;i++){
      tot+=n[i];
   }
   cout<<"\n"<<"The array is:"<<endl;
   for(i=0;i<5;i++){
      cout<<n[i]<<"\t";
   }
   cout<<"\n"<<"The sum of the element of array is:"<<tot<<endl;
   return 0;
}