// Drill 1-7 (chapter 11)
#include "../std_lib_facilities.h"

int main(){
    int birth_year = 1981;
    int age = 39;
    cout << "decimal:\t" << birth_year << endl
         << "hexadecimal:\t" << hex << birth_year << endl
         << "octal form:\t" << oct << birth_year << endl 
         << "decimal again:\t" << dec << age << endl 
      
         << showbase << "\nShowing the base" << endl
         << "decimal:\t" << birth_year << endl
         << "hexadecimal:\t" << hex << birth_year << endl
         << "octal form:\t" << oct << birth_year << endl 
         << "decimal again:\t" << dec << age << endl;
    return 0;
}