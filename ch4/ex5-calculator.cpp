// very similar to ch.3 - ex.10, but with a switch structure and slightly different output
#include "../std_lib_facilities.h"

int main() {
    char operation;
    double operand1, operand2;
    cout << "VERY SIMPLE CALCULATOR\n";
    cout << "Enter an operation (+, -, * or /) between two numbers,\nfollowing the sequence: operand1 operation operand2 (e.g.: 3.1 * 8.4))\n";
    cin >> operand1 >> operation >> operand2;
    switch(operation){
        case '+':
        {
            cout << "The sum of " << operand1 << " and " << operand2 << " is " << operand1 + operand2 << '\n';
            break;
        }
        case '-':
        {
            cout << operand1 << " minus " << operand2 << " equals " << operand1 - operand2 << '\n';
            break;
        }
        case '*':
        {
            cout << operand1 << " times " << operand2 << " equals " << operand1 * operand2 << '\n';
            break;
        }
        case '/':
        {
            cout << operand1 << " divided by " << operand2 << " equals " << operand1 / operand2 << '\n';
            break;
        }
        default:
            cout << "I don't know this operation" << '\n';
    }  
}