#include "../std_lib_facilities.h"

double ctok(double c)       // converts Celsius to Kelvin
{
    // int k = c + 273.15;     // error 0: change of data type (logic)
    double k = c + 273.15;
    // return int           // error 1: invalid type of return (syntax)
    return k;
}

int main()
{
    double c = 0;           // declare input variable
    // cin >> d;            // error 2 typo (logic)
    cin >> c;               // retrieve temperature to input variable
    // double k = ctok("c");// error 3: type error
    double k = ctok(c);     // convert temperature
    // Cout <<k<<'/n';      // error 4: invalid function and symbol / (syntax)
    cout << k << '\n';      // print out temperature
}