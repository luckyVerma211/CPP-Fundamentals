#include <iostream>
using namespace std;
int main()
{
   int a,num,d,s=0;
   cout<<"Enter a number:";
   cin>>a;
   num=a;
   while(a>0){
      d=a%10;
      s=s*10+d;
      a=a/10;
   }
   cout<<"The reverse of the number "<<num<<" is: "<<s<<" !!"<<endl;
   return 0;
}
