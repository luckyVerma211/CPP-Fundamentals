#include<iostream>
using namespace std;
int main()
{
   int unit,bill;
   cout<<"Enter the units of electricity consumed:";
   cin>>unit;
   if(unit<=100)
   {
      bill=unit*4;
   }
   else if(unit<=300)
   {
      bill=400+(unit-100)*6;
   }
   else
   {
      bill=1600+(unit-300)*8;
   }
   cout<<"The Elecricity Bill is:"<<bill<<"Rs.";
   return 0;
}
