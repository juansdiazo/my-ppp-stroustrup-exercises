// Drill 9 (chapter 11)
#include "../std_lib_facilities.h"

int main(){
    float num = 1234567.89;

    cout << "default float:\t" << num << endl   // by default float value with 6 total digits
         << "fixed form:\t" << fixed << num << endl             // most accurate representation
         << "scientific:\t" << scientific << num << endl
         << "\nChanging precision to 9" << setprecision(9) << endl
         << "default float:\t" << defaultfloat << num << endl   
         << "fixed form:\t" << fixed << num << endl             
         << "scientific:\t" << scientific << num << endl;

    return 0;
}