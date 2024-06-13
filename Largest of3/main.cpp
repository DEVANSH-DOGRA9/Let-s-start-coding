//Largest of 3 nos.
#include<iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout <<"Enter 1st number :: ";
    cin>>a;
    cout <<"\nEnter 2nd number :: ";
    cin>>b;
    cout <<"\nEnter 3rd number :: ";
    cin>>c;

    if(a>=b && a>=c)
    {
    cout<<"\nThe Largest number among [ "<<a<<", "<<b<<", "<<c<<" ] is :: "<<a<<"\n";
    }
    else if(b>=a && b>=c)
    {
    cout<<"\nThe Largest number among [ "<<a<<", "<<b<<", "<<c<<" ] is :: "<<b<<"\n";
    }
    else if(c>=a && c>=b)
    {
    cout<<"\nThe Largest number among [ "<<a<<", "<<b<<", "<<c<<" ] is :: "<<c<<"\n";
    }
    else

   return 0;
}
