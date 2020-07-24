#include "../std_lib_facilities.h"

int main(){
    string spelled_number;
    cout << "Enter a spelled number: ";
    cin >> spelled_number;
    if (spelled_number == "zero"){
        cout << "0\n";
    } else if (spelled_number == "one"){
        cout << "1\n";
    } else if (spelled_number == "two"){
        cout << "2\n";
    } else if (spelled_number == "three"){
        cout << "3\n";
    } else if (spelled_number == "four"){
        cout << "4\n";
    } else {
        cout << "That's not a number I know!\n";
    }
}