#include "../std_lib_facilities.h"

int main() {
    string operation;
    double operand1, operand2;
    cout << "Enter an operation, and two operands separated by spaces (ex: + 3.3 0.8)): ";
    cin >> operation >> operand1 >> operand2;
    if ((operation=="+") || (operation=="plus") || (operation=="addition"))
    {
        cout << "The result of the operation is: " << operand1 + operand2 << '\n';
    }
    else if ((operation=="-") || (operation=="minus")|| (operation=="subtraction"))
    {
        cout << "The result of the operation is: " << operand1 - operand2 << '\n';
    }
    else if ((operation=="*") || (operation=="mul") || (operation=="multiplication"))
    {
        cout << "The result of the operation is: " << operand1 * operand2 << '\n';
    }
    else if ((operation=="/") || (operation=="div") || (operation=="division"))
    {
        cout << "The result of the operation is: " << operand1 / operand2 << '\n';
    } else {
        cout << "I don't know this operation" << '\n';
    }  
}