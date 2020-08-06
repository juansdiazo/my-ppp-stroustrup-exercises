#include "../std_lib_facilities.h"

double ctok(double c)       // converts Celsius to Kelvin
{
    // pre-condition: value must be higher than absolute zero (-273.15 C)
    if (c<-273.15) error("Impossible temperature (too low)"); 
    int k = c + 273.15;
    return k;
}

double ktoc(double k)       // converts Celsius to Kelvin
{
    // pre-condition: value must be higher than absolute zero (0 K)
    if (k<0) error("Impossible temperature (too low)"); 
    int c = k - 273.15;
    return k;
}

int main()
{
    double temp = 0;        // declare temperature input
    int choice;             // declare choice
    cout << "TEMPERATURE CONVERSION\n";
    cout << "Press 1 if you want to convert from Celsius to Kelvin\n";
    cout << "Press 2 if you want to convert from Kelvin to Celsis\n";
    cin >> choice;          // retrieve choice to input variable
    switch (choice){
        case 1: 
            cout << "Enter your temperature in Celsius: ";
            cin >> temp;    // retrieve temperature to input variable
            cout << "Your temperature in Kelvin is: " << ctok(temp) << '\n';
            break;
        case 2: 
            cout << "Enter your temperature in Kelvin: ";
            cin >> temp;    // retrieve temperature to input variable
            cout << "Your temperature in Celsius is: " << ktoc(temp) << '\n';
            break;
        default:
            cout << "You entered an invalid option \n";
    }
}