
#include <iostream>
using namespace std;
int main()
{

    cout << "Hello user" << endl;

    cout << "Welcome to calculate the area of circle" << endl;
    cout << "plz entre \"r\"" << endl;

    int r = 0;
    cin >> r;
    double area = 3.14 * r * r;
    cout << "the area of circle is " << area << endl;

    return 0;
}