#include "../std_lib_facilities.h"

int main(){
    double lower_limit = 0;
    double upper_limit = 100;
    double guess = 50;
    int questions=0;
    char answer;
    cout << "Think a number between 1 and 100 and I will guess it, by asking you 7 questions...\n";
    while (questions<7){
        cout << "Is the number you are thinking less than "<< guess << "? (answer with y or n)\n";
        cin >> answer;
        if (answer == 'y') {
            upper_limit =  guess; // bring down the upper limit 
            guess = upper_limit - (upper_limit - lower_limit)/2; // place new guess in center of new boundaries
            questions++; 
        } else if (answer == 'n') {
            lower_limit = guess; // raise the lower limit
            guess = lower_limit + (upper_limit - lower_limit)/2; // place new guess in center of new boundaries 
            questions++;
        } else {
            cout << "Please answer with y (for yes) or n (for n) \n";
            continu.......e;
        }
    }
    cout << "The number you are thinking is " << round(guess) << "! Boooom!\n";
} 