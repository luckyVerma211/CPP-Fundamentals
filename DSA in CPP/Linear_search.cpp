#include <iostream>
using namespace std;
int main()
{
   int n[10];
   int i,num;
   cout<<"Create the array!!"<<endl;
   for(i=0;i<10;i++){
      cout<<"Enter the number:";
      cin>>n[i];
   }
   cout<<"The array created is:"<<endl;
   for(i=0;i<10;i++){
      cout<<n[i]<<"\t";
   }
   cout<<endl;
   cout<<"Enter the number to be searched:";
   int f=0;
   cin>>num;
   for(i=0;i<10;i++){
      if(n[i]==num){
         cout<<num<<" found at position "<<i<<endl;
         f+=1;
      }
   }
   if(f==0){
      cout<<"Number not found in the list!!";
   }
   return 0;
}
