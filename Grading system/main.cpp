//Grading system
#include <iostream>

using namespace std;

int main()
{
    int m;
    cout << "Enter marks: " << endl;
    cin>>m;
    if(m<25)
        cout<<"Grade: F"<<endl;
    else if(m>=25&&m<=45)
        cout<<"Grade: E"<<endl;
    else if(m>=45&&m<=50)
        cout<<"Grade: D"<<endl;
    else if(m>=50&&m<=60)
        cout<<"Grade: C"<<endl;
    else if(m>=60&&m<=80)
        cout<<"Grade: B"<<endl;
    else
        cout<<"Grade: A"<<endl;
    return 0;
}
