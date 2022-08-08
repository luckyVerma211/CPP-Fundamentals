#include <iostream>
using namespace std;
int main()
{
   int a,b,i=1,pr=1;
   cout<<"Enter the base number:";
   cin>>a;
   cout<<"Enter the exponent number:";
   cin>>b;
   for(i;i<=b;i++)
   {
      pr*=a;
   }
   cout<<"The value of "<<a<<" to the power "<<b<<" is:"<<pr<<endl;
   return 0;
}