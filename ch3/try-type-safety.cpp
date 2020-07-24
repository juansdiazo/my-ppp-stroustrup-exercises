#include "../std_lib_facilities.h"

int main ()
{
    int big_int_number = 20000;
    char squeezed_int_into_char = big_int_number; // try to squeeze a large int into a small char
    int char_turned_to_int = squeezed_int_into_char;
    
    if (char_turned_to_int != big_int_number) 
        cout << "oops!: " << big_int_number << " != " << char_turned_to_int << '\n';
    else
        cout << "Wow we have large characters!\n";

    double d = 0;

    while (cin>>d)
    {
        int i = d;          // try to squeeze a double into an int
        char c = i;         // try to squeeze an int into a char
        int i2 = c;         // get the integer value of the character
        cout << "d==" << d              // the original double
             << " i==" << i             // converted to int
             << " i2==" << i2           // int value of char
             << " char(" << c <<")\n";  // the char
    }   
}