#include "../std_lib_facilities.h"

int main(){
    cout << "TABLE EXAMPLE\n" << left
         << setw(15) << "LAST NAME" << setw(15) << "FIRST NAME" << setw(20) << "TELEPHONE\t"       << setw(30) << "EMAIL" << endl
         << setw(15) << "Diaz"      << setw(15) << "Juan"       << setw(20) << "+49 176 1234 5678" << setw(30) << "diazjuan@gmail.com" << endl
         << setw(15) << "Leguizamon"<< setw(15) << "Carolina"   << setw(20) << "+49 176 1234 5679" << setw(30) << "leguizamoncarolina@hotmail.com" << endl
         << setw(15) << "Muller"    << setw(15) << "Maximilian" << setw(20) << "+49 176 1234 5670" << setw(30) << "mullermaximilian@yahoo.com" << endl
         << setw(15) << "Stroustrup"<< setw(15) << "Bjarne"     << setw(20) << "+49 176 1234 5671" << setw(30) << "stroustrupbjarne@gmx.com" << endl
         << setw(15) << "Rodriguez" << setw(15) << "James"      << setw(20) << "+49 176 1234 5672" << setw(30) << "rodriguezjames@gmail.com" << endl;
        
    return 0;
}