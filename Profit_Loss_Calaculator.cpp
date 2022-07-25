#include<iostream>
using namespace std;
int main()
{
   int sp,cp,res;
   cout<<"Enter the Cost Price of the item:";
   cin>>cp;
   cout<<"Enter the Selling Price of the item:";
   cin>>sp;
   if(sp>cp)
   {
      res=sp-cp;
      cout<<"Wow!! You Made Profit........"<<endl;
      cout<<"Profit is:"<<res<<endl;
   }
   else
   {
      res=cp-sp;
      cout<<"Oops!! You Get into Loss......."<<endl;
      cout<<"Loss is:"<<res<<endl;
   }
   return 0;
}
