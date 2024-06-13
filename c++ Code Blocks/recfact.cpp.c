#include<iostream>
using namespace std;
int main()
{
return 0;
}
int fact( int a)
{
if(a==0)
return 1;
else{
cout<<"finding fact of"<<a;
int b;
b=a*fact(a-1);

return b;
}
}
