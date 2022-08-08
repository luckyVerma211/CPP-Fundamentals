#include <iostream>
using namespace std;
int main()
{
   int n,i,fac=1;
   cout<<"Enter the number:";
   cin>>n;
   for(i=1;i<=n;i++)
   {
      fac*=i;
   }
   cout<<"The factorial of the number is:"<<fac<<endl;
   return 0;
}
