//grading system1
#include <iostream>

using namespace std;

int main()
{
    int p;
    cout << "Enter the pointer:" << endl;
    cin>>p;
    if(p>=9&&p<=10)
        cout<<"A+"<<endl;
    if(p>=8&&p<9)
        cout<<"A"<<endl;
    if(p>=7&&p<8)
        cout<<"B+"<<endl;
    if(p>=6&&p<7)
        cout<<"B"<<endl;
    if(p>=5&&p<6)
        cout<<"C"<<endl;
    if(p>=4&&p<5)
        cout<<"D"<<endl;
    return 0;
}

