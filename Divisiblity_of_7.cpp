#include <iostream>
using namespace std;
int main()
{
   int i=1,n,s=0;
   for(i;i<=10;i++)
   {
      cout<<"Enter the number:";
      cin>>n;
      if(n%7==0)
      {
         cout<<n<<" is divisible by 7!"<<endl;
         s+=1;
      }
      else
      {
         cout<<n<<" is not divisible by 7!"<<endl;
      }
      
   }
   cout<<"Out of 10 numbers only "<<s<<" are divisible by 7!!!!!!"<<endl;
   return 0;
}