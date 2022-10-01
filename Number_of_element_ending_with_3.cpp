#include <iostream>
using namespace std;
int main(){
   int n[10],i,tot=0;
   for(i=0;i<10;i++){
      cout<<"Enter the number:";
      cin>>n[i];
   }
   for(i=0;i<10;i++){
      if(n[i]%10==3)
         tot+=1;
   }
   cout<<"\n"<<"The array is:"<<endl;
   for(i=0;i<10;i++){
      cout<<n[i]<<"\t";
   }
   cout<<"\n"<<"The number of the element ending with 3 is:"<<tot<<endl;
   return 0;
}