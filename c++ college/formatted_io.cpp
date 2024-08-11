#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Example for formatted IO" << endl;

    cout << "Default: " << endl;
    cout << 123 << endl;

    cout << "width(5): " << endl;
    cout.width(5);
    cout << 123 << endl;

    cout << "width(5) and fill('*'): " << endl;
    cout.width(5);
    cout.fill('*');
    cout << 123 << endl;

    cout.precision(5);
    cout << "precision(5) ---> " << 123.4567890 << endl;
    cout << "precision(5) ---> " << 9.876543210 << endl;

    cout << "setf(showpos): " << endl;
    cout.setf(ios::showpos);
    cout << 123 << endl;

    cout << "unsetf(showpos): " << endl;
    cout.unsetf(ios::showpos);
    cout << 123 << endl;

    return 0;
}