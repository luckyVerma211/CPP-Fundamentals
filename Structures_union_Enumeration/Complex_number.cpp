#include<iostream>
using namespace std;
struct complex{
    int real;
    int imaginary;
};
void input(){

}
int main(){
    complex a,b;
    int sum_real,sum_img,diff_real,diff_img;
    cout<<"Enter the real part of num1:";
    cin>>a.real;
    cout<<"Enter the imaginary part of num1:";
    cin>>a.imaginary;
    cout<<"Enter the real part of num2:";
    cin>>b.real;
    cout<<"Enter the imaginary part of num2:";
    cin>>b.imaginary;
    sum_real=a.real+b.real;
    sum_img=a.imaginary+b.imaginary;
    diff_real=a.real-b.real;
    diff_img=a.imaginary-b.imaginary;
    cout<<endl;
    if(sum_img>0)
        cout<<"The sum is:"<<sum_real<<"+"<<sum_img<<"i"<<endl;
    else
        cout<<"The sum is:"<<sum_real<<sum_img<<"i"<<endl;
    if(diff_img>0)
        cout<<"The difference is:"<<diff_real<<"+"<<diff_img<<"i"<<endl;
    else
        cout<<"The difference is:"<<diff_real<<diff_img<<"i"<<endl;
    return 0;
}