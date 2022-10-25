#include<iostream>
using namespace std;
int main()
{ int num1,num2;
  char op;
  while(true)
  {
    cout<<"enter the number 1:"<<endl;
    cin>>num1;
    cout<<"enter the number 2:"<<endl;
    cin>>num2;
    cout<<"enter the operation:"<<endl;
    cin>>op;
    if (op=='+')
    cout<<"Addition"<<num1+num2<<endl;
    else
    if (op=='-')
    cout<<"Subtraction"<<num1-num2<<endl;
    else
    if (op=='*')
    cout<<"Multiplication"<<num1*num2<<endl;
    else
    if (op=='/')
    cout<<"Division"<<num1/num2<<endl;
    else
    if (op=='%')
    cout<<"Remainder"<<num1%num2<<endl;
    else
    break;
}
  cout<<"wrong input";
  return 0;
}