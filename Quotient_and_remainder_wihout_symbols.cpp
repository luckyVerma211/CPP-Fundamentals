#include<iostream>
using namespace std;
int main()
{
   int num1,num2,s=0,rem=0;
   cout<<"Enter the first number:";
   cin>>num1;
   cout<<"Enter the second number:";
   cin>>num2;
   while(num1>0){
      if(num1<num2){
         rem=num1;
         num1=0;
         
      }
      else{
         num1=num1-num2;
         s++;
      }
   }
   cout<<"The quotient is:"<<s<<endl;
   cout<<"The remainder is:"<<rem<<endl;
   
   return 0;
}
