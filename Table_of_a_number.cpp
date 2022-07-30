#include <iostream>
using namespace std;
int main()
{
   int num,a;
   cout<<"Enter the Number:";
   cin>>num;
   cout<<"TABLE OF "<<num<<endl;
   for(a=1;a<=10;a++)
      cout<<num<<" X "<<a<<" = "<<num*a<<endl;
   return 0;
}
