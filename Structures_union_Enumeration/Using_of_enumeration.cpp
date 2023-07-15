#include<iostream>
using namespace std;
enum operation{
    add=1,subtract,divide,multiply
};
int main(){
    float a,b,res;
    int ch;
    cout<<"Enter the numbers:";
    cin>>a>>b;
    cout<<"Press 1 - To Add"<<endl;
    cout<<"Press 2 - To Subtrct"<<endl;
    cout<<"Press 3 - To Divide"<<endl;
    cout<<"Press 4 - To Multiply"<<endl;
    cout<<"Enter the choice:";
    cin>>ch;
    switch (ch){
        case add:
            res=a+b;
            cout<<"The Sum is:"<<res<<endl;
            break;
        case subtract:
            res=a-b;
            cout<<"The Difference is:"<<res<<endl;
            break;
        case divide:
            res=a/b;
            cout<<"The quotient is:"<<res<<endl;
            break;
        case multiply:
            res=a*b;
            cout<<"The product is:"<<res<<endl;
            break;
        default:
            cout<<"Invalid Choice!!"<<endl;
            break;
    }
    return 0;
}