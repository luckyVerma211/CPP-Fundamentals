#include <iostream>
using namespace std;
int main()
{
   int a,b,i=1,pr=0;
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   for(i;i<=b;i++)
   {
      pr+=a;
   }
   cout<<"The product of "<<a<<" and "<<b<<" is:"<<pr<<endl;
   return 0;
}
