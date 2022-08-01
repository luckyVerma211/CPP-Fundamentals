#include <iostream>
using namespace std;
int main()
{
   int pos=0,neg=0,zer=0,num,val,a;
   cout<<"Enter the total numbers of even and odd to be counted :";
   cin>>num;
   for(a=1;a<=num;a++)
   {
      cout<<"Enter the number:";
      cin>>val;
      if(val>0)
         pos++;
      else if(val<0)
         neg++;
      else
         zer++;
   }
   cout<<"The total number of positive numbers is:"<<pos<<endl;
   cout<<"The total number of negative numbers is:"<<neg<<endl;
   cout<<"The total number of zeros is:"<<zer<<endl;
   return 0;
}