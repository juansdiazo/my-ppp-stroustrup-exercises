// Drill 8 plus others 11.2.2 (chapter 11)
#include "../std_lib_facilities.h"

int main(){
    int a,b,c,d;
    int e=0;
    int f=0;
    int g=0;

    cout << "\nInput 4 integers: 1st(dec), 2nd(oct), 3rd and 4th(hex):\n";
    cin >> a                // reads a decimal integer
        >> oct >> b         // reads an octal integer
        >> hex >> c >> d;   // reads hexa integers (sticky)

    // shows the input converted to decimal integer (cout default)
    cout << a <<'\t'<< b <<'\t' << c <<'\t'<< d <<'\n';

    // shows the input in their input format (manually set - sticks too)
    cout << a << oct <<'\t'<< b << hex <<'\t'<< c <<'\t'<< d << endl; 

    cin.unsetf(ios::dec);
    cin.unsetf(ios::oct);
    cin.unsetf(ios::hex);

    cout << "\nInput 3 integers with prefixes (decimal: none, oct:0, hex:0x):\n";
    cin >> e >> f >> g;

    // shows the input converted to decimal integer (set like that)
    cout << dec << e <<'\t'<< f <<'\t' << g <<'\n';


    return 0;
}