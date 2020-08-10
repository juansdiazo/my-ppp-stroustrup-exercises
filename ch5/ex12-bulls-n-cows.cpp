#include "../std_lib_facilities.h"

int main()
try{
    vector<int> goal = {3,2,1,0};   // number to guess
    vector<int> guess;              // vector with user's guess
    vector<int> check;              // vector to check non-repeating digits
    int bulls{0};                   // counter of bulls 
    int cows{0};                    // counter of cows
    int i,j;                        // iterators
    int input;                      // user input
   
    cout << "BULLS AND COWS!\n";
    cout << "\nInstructions:\nYou have to guess a goal number sequence of 4 integer digits, which are not repeated.\n";
    cout << "If you get a BULL: You got one digit right and in the right position.\n";
    cout << "If you get a COW: You got one digit right but in the wrong position.\n";
    cout << "You win when you guess the whole sequence correctly (i.e. 4 BULLS)\n\nLet's start...\n";

    while(bulls != goal.size()){
        bulls = 0;
        cows = 0;
        guess.clear();
        cout << "\nInput your 4-non-repeating-digit guess: \n";

        // receive user input
        for (i=0; i<goal.size(); i++){
            cin >> input;
            if(!cin) error("Not a valid input! Only integers from 0 to 9 are accepted.");
            if( input<0 || input >9 ) error("Not a valid input! Only integers from 0 to 9 are accepted.");
            guess.push_back(input);
        }
        
        // check non repeating digits in guess
        check = guess;
        sort(check);
        for (i=1; i<check.size();i++){
            if (check[i-1]==check[i]) error("Not a valid input! There was a repeated integer in your sequence.");
        }

        // analysis of bulls and cows in guess
        for(i=0; i<goal.size(); i++){
            for (j=0; j<guess.size(); j++){
                if (guess[j] == goal[i]){
                    if (i==j) bulls++;
                    else cows++;
                }
            }
        }

        cout << "You got " << bulls << " bulls and " << cows << " cows.\n";
    }
    cout << "\nYou won!!\n";
    return 0; // success
}

catch(exception &e){
    cerr << "error: " << e.what() << "\n";
    keep_window_open();
    return 1;   // failure
}

catch (...){
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;   // failure
}