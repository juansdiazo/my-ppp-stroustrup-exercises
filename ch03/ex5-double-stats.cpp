#include "../std_lib_facilities.h"

int main(){
    double num1, num2;
    cout << "Enter the value of floating-point number 1: ";
    cin >> num1;
    cout << "Enter the value of floating-point number 2: ";
    cin >> num2;
    
    num1>num2?cout <<"The first value is larger than the second\n":cout <<"The first value is smaller or equal to the second\n";
    cout << "Their sum is " << num1+num2 << '\n';
    cout << "Their difference is " << num1 - num2 << '\n';
    cout << "Their product is " << num1 * num2 << '\n';
    cout << "The ratio of these values is " << num1/num2 << '\n';
}