#include<iostream>
using namespace std;

int main()
{
    int a1, a2, b1, b2, c1, c2;
    char ch;
    cin >> a1 >> ch >> b1 >> ch >> c1;
    cin >> a2 >> ch >> b2 >> ch >> c2;
    if (c1 + c2 >= 29) {
        b1++;
        c1 = c1 - 29;
    }
    if (b1 + b2 >= 17) {
        a1++;
        b1 = b1 - 17;
    }
    cout << a1 + a2 << '.' << b1 + b2 << '.' << c1 + c2;
}