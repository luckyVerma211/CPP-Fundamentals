#include <iostream>
using namespace std;
int main()
{
   int num,a;
   cout<<"Enter the Number:";
   cin>>num;
   int s=0;
   for(a=1;a<=num;a++)
   {
      if(num%a==0)
         s++;
   }
   if (s==2)
      cout<<num<<" is a Prime Number!!";
   else
      cout<<num<<" is not a Prime Number!!";
   return 0;
}

