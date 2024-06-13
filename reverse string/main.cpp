#include <iostream>
#include<string>
using namespace std;

int main()
{
   string str,rev="";
   int i,l;
    cout << "Enter string to be reversed:" << endl;
    cin>>str;
    l=str.size();
    for(int i=l-1;i>=0;i--)
    {
        rev=rev+str[i];
    }
    cout<<"Reversed string: "<<rev<<endl;
    return 0;
}
