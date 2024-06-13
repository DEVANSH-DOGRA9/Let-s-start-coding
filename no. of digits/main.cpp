#include <iostream>

using namespace std;

int main()
{
    int c=0,n;
    cout<<"Enter no."<<endl;
    cin>>n;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    cout << "No. of digits: " << c<< endl;
    return 0;
}
