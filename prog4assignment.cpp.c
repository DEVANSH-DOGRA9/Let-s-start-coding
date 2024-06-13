#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter two numbers to be swapped"<<endl;
cin>>a;
cin>>b;
cout<<"The values of and b before swapping are:"<<a,b<<endl;
c=a;
a=b;
b=c;
cout<<"The values of and b after swapping are:"<<a,b<<endl;
return 0;
}
