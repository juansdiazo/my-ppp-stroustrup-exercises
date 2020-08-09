#include "../std_lib_facilities.h"

int main()
try{
    vector<string> series;
    int n;
    string input; // so it accepts any input
    int nsum=0;  
    
    cout << "Please enter the number of values you want to sum: ";
    cin >> n;
    if(!cin) error("Could not read an int value.");
    
    cout << "Please enter some integers (press '|' to stop): ";
    while (cin >> input){ // exits with '|' or any non-int
        if(input=="|") break;
        series.push_back(input); 
    }

    if (n > series.size()) error("You entered insufficient numbers to make the sum.");

    for (int i=0; i<n;i++){ // extra loop to show stoi error in a clearer way
        nsum += stoi(series[i]); // throws stoi error when input was not int 
    }
   
    cout << "The sum of the first " << n << " numbers ( ";
    for (int i=0; i<n;i++) cout << series[i] << " ";
    cout << ") is " << nsum << " .\n";
    return 0;   // success
}

catch(exception &e) {
    string whatout = e.what();
    if (whatout == "stoi") cerr << "The result cannot be represented as an int.\n";
    else cerr << "error: " << whatout << "\n";
    keep_window_open();
    return 1;   // failure
}

catch (...){
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;   // failure
}