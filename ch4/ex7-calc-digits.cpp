// very similar to ch.3 - ex.10, but with a switch structure and slightly different output
#include "../std_lib_facilities.h"


// Function to test operands
bool test_operand(int &operand, string input_operand, vector<string> digits);

int main() {
    char operation;
    string input_operand1, input_operand2;
    int operand1, operand2;
    bool valid_operand1=false, valid_operand2=false;
    vector<string> spelled_digits = {"zero", "one", "two", "three","four", "five", "six","seven","eight","nine"};
    vector<string> numerical_digits = {"0", "1", "2", "3","4", "5", "6","7","8","9"};
    
    cout << "DIGIT CALCULATOR\n";
    cout << "Enter an operation (+, -, * or /) between two digits (numerical or spelled-out),\nfollowing the sequence: operand1 operation operand2 (e.g.: two * 3))\n";
    cin >> input_operand1 >> operation >> input_operand2;

    valid_operand1 = test_operand(operand1, input_operand1, spelled_digits); // test if input is a spelled digit
    if (!valid_operand1) valid_operand1 = test_operand(operand1, input_operand1, numerical_digits); // test if input is a numerical digit
    valid_operand2 = test_operand(operand2, input_operand2, spelled_digits);
    if (!valid_operand2) valid_operand2 = test_operand(operand2, input_operand2, numerical_digits);

    if (!valid_operand1 || !valid_operand2){ 
        cout << "You entered an invalid operand value (only digits from 0 to 9, numerical or spelled, are accepted!)\n";
        return 1;
    }

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

bool test_operand(int &operand, string input_operand, vector<string> digits) {
    bool valid_operand=false;
    for (int i=0; i< digits.size();i++){
        if (input_operand == digits[i]){
            operand = i;
            valid_operand = true;
            return valid_operand;
        }
    }
    return valid_operand;
}