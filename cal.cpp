/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C++ Program to make a Simple Calculator using
// switch-case statements
#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double a, b, res;

    // Read the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Read the two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        cout << "Error! Operator is not correct";
        res = -DBL_MAX;
    }
    
      // Printing the result
    if (res != -DBL_MAX)
        cout << "Result: " << res;
    return 0;
}
