// very similar to ch.3 - ex.9, but with vector structure, more numbers and 2-way spell<->digit
// #include "../std_lib_facilities.h"

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string spelled_input;
    int option, digit;
    bool valid_input=false;
    vector<string> spelled_digits = {"zero", "one", "two", "three","four", "five", "six","seven","eight","nine"};

    cout << "\nSPELLED DIGITS\n";
    cout << "Select one of the two options:\n";
    cout << "1.Convert numerical digit to spelled-out digit\n2.Convert spelled-out digit to numerical digit\n\nPlease enter 1 or 2 (q to exit): ";

    while(cin >> option){
        switch(option){
        case 1:
            cout << "Enter a digit from 0 to 9: ";
            cin >> digit;
            if (digit >= 0 && digit<10){
                cout << "The spelled-out digit is: " << spelled_digits[digit] << '\n';
            } else {
                cout << "That is an invalid digit!\n";
            }
            break;
        case 2:
            cout << "Enter a spelled-out digit in lower-case letters (e.g.:seven): ";
            cin >> spelled_input;
            for (int i=0; i< spelled_digits.size();i++){
                if (spelled_input == spelled_digits[i]){
                    cout << "The corresponding digit is: " << i << '\n';
                    valid_input = true;
                }
            }
            if (!valid_input){ 
                cout << "That is an invalid string!\n";
            }
            valid_input = false; 
            break;
        default:
            cout << "That is an invalid option!\n";
        }
        cout << "\nPlease enter 1 or 2 (q to exit): ";
    }
}