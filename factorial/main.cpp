#include<iostream>
using namespace std;
int fact( int a)
{
if(a==0)
{
    cout<<"finding fact of "<<a<<endl;
    cout<<"fact of "<<a<<" is 1"<<endl;
    return 1;
}

else{
cout<<"finding fact of "<<a<<endl;
int b;
b=a*fact(a-1);
cout<<"fact of "<<a<<" is "<<b<<endl;

return b;
}
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);

return 0;
}

