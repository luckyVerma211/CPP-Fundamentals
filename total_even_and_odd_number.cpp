#include<iostream>
using namespace std;
int main()
{
   int odd=0,even=0,num,val,a;
   cout<<"Enter the total numbers of even and odd to be counted :";
   cin>>num;
   for(a=1;a<=num;a++)
   {
      cout<<"Enter the number:";
      cin>>val;
      if(val%2==0)
         even++;
      else
         odd++;
   }
   cout<<"The total number of even numbers is:"<<even<<endl;
   cout<<"The total number of odd numbers is:"<<odd<<endl;
   return 0;
}