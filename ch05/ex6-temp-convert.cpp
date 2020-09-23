#include "../std_lib_facilities.h"

double ctok(double c);      // converts Celsius to Kelvin
double ktoc(double k);      // converts Kelvin to Celsius
double ctof(double c);      // converts Celsius to Fahrenheit
double ftoc(double f);      // converts Fahrenheit to Celsius

int main() {
    double temp = 0;        // declare temperature input
    int choice;             // declare choice
    cout << "TEMPERATURE CONVERSION\n";
    cout << "Press 1 if you want to convert from Celsius to Kelvin\n";
    cout << "Press 2 if you want to convert from Kelvin to Celsius\n";
    cout << "Press 3 if you want to convert from Celsius to Fahrenheit\n";
    cout << "Press 4 if you want to convert from Fahrenheit to Celsius\n";
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
        case 3: 
            cout << "Enter your temperature in Celsius: ";
            cin >> temp;    // retrieve temperature to input variable
            cout << "Your temperature in Fahrenheit is: " << ctof(temp) << '\n';
            break;
        case 4: 
            cout << "Enter your temperature in Fahrenheit: ";
            cin >> temp;    // retrieve temperature to input variable
            cout << "Your temperature in Celsius is: " << ftoc(temp) << '\n';
            break;
        default:
            cout << "You entered an invalid option \n";
    }
}

double ctok(double c){       // converts Celsius to Kelvin
    // pre-condition: value must be higher than absolute zero (-273.15 C)
    if (c<-273.15) error("Impossible temperature (too low)"); 
    return c + 273.15;
}

double ktoc(double k){       // converts Kelvin to Celsius
    // pre-condition: value must be higher than absolute zero (0 K)
    if (k<0) error("Impossible temperature (too low)"); 
    return k - 273.15;
}

double ctof(double c){      // converts Celsius to Fahrenheit
    // pre-condition: value must be higher than absolute zero (-273.15 C)
    if (c<-273.15) error("Impossible temperature (too low)"); 
    return (c * 9/5) + 32;
}

double ftoc(double f){     // converts Fahrenheit to Celsius
    // pre-condition: value must be higher than absolute zero (-459.67 F)
    if (f<-459.67) error("Impossible temperature (too low)"); 
    return (f - 32) * 5/9;;
}