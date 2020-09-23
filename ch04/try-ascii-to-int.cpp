#include "../std_lib_facilities.h"

int main(){
    int i = 97;
    char letters_choice = ' ';
    cout << "To see the table with capital letters enter c, to see it with lower case letters enter l: ";
    cin >> letters_choice;
    if (letters_choice == 'l')
    {
        cout << "char\tint\n";
        while (i<123)
        {
            cout << char(i) << "\t" << i << "\n";
            i++;
        }
    }
    else if (letters_choice == 'c')
    {
        cout << "char\tint\n";
        for (i=65; i<91; i++)
        {|
           cout << char(i) << "\t" << i << "\n"; 
        }
    }
    else
    {
        cout << "You entered an invalid choice.";
    }
}