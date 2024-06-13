//to display the operations of pre and post increment and decrement operators
#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a;
cin>>b;
cout<<"Original value of a is:"<<a<<endl;
a++;

cout<<"The value of a after post increment is:"<<a<<endl;

cout<<"Now the value of a is:"<<a<<endl;
++a;
cout<<"The value of a after pre increment is"<<a<<endl;

cout<<"The originl value of b is:"<<b<<endl;
b--;

cout<<"The value of b after post decrement is:"<<b<<endl;

cout<<"Now the value of b is:"<<b<<endl;
--b;

cout<<"The value of b after pre decrement is:"<<b<<endl;
return 0;
}
