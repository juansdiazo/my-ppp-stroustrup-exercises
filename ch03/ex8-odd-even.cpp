#include "../std_lib_facilities.h"

int main(){
    int number;
    cout << "Enter an integer number and press enter: ";
    cin >> number;
    (number%2)==0? cout << number << " is an even number\n": 
                   cout << number << " is an odd number\n";
}