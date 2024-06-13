#include <iostream>
using namespace std;

int main()
{
    double first, second, product;

    cout << "Enter 2 numbers :: ";
    cin >> first;
    cin >> second;

    product = first * second;

    cout << "\nProduct of Two  Numbers [ "<<first<<" * "<<second<<" ] = " << product<<"\n";

    return 0;
}
