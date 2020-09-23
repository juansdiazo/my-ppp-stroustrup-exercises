#include "../std_lib_facilities.h"

int main()
{
    double miles,kms;
    cout << "Enter value of miles: ";
    cin >> miles;
    kms = miles*1.609;
    cout << "Is equivalent to " << kms << " kilometers.\n"; 
}