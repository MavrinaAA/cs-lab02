#include <iostream>

using namespace std;
//you// 
int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << " A + B = " << a + b << '\n';
    cout << " A - B = " << a - b << '\n';
    cout << " A * B = " << a * b << '\n';
    cout << " A / B = " << a / b << '\n';

    if (a>b)
        cout<< a << '\n';
    else
        cout << b << '\n';

    if (a < b)
        cout << a;
    else
        cout << b; 

    return 0;
}
