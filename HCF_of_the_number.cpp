#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   s=b;
   while(a%b!=0){
      c=a%b;
      a=b;
      b=c;
   }
   cout<<"The HCF of the number is: "<<b<<endl;
   
   return 0;
}