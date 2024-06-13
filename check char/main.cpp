#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the character:" << endl;
    char ch;
    cin>>ch;
    if(ch>=65&&ch<=90)
        cout<<"UPPERCASE!"<<endl;
    else if (ch>=97&&ch<=122)
        cout<<"lowercase"<<endl;
    else
    return 0;
}

