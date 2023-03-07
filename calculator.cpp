
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    long float a, b, c;
    char symbol;
    cout << "Enter an operation symbol" << endl;
    cin >> symbol;
    if (symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-') {
        cout << "Enter first count" << endl;
        cin >> a;
        cout << "Enter second count" << endl;
        cin >> b;
    }
    else{
        cout << "error" << endl;
        return 0;
    }

    // check operation
    if (symbol == '*') {

        c = a * b;
    }
    else if (symbol == '/') {
        c = a / b;
    }
    else if (symbol == '+') {
        c = a + b;
    }
    else if (symbol == '-') {
        c = a - b;
    }
   
    cout << "Answer: " << c;
}

