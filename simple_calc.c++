
#include <iostream>
using namespace std;

int main()

{

    cout << "Hello user" << endl;

    cout << "please entre the first number" << endl;

    double num1 = 0.0;
    cin >> num1;
    cout << num1 << endl;

    cout << "please entre the second number" << endl;
    double num2 = 0.0;
    cin >> num2;
    cout << num2 << endl;

    cout << " addtion       --> " << num1 + num2 << endl;
    cout << " subtraction   --> " << num1 - num2 << endl;
    cout << " muliblication --> " << num1 * num2 << endl;
    cout << " division      --> " << num1 / num2 << endl;

    return 0;
}