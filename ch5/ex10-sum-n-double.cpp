#include "../std_lib_facilities.h"

int main()
try{
    vector<string> series;
    vector<double> differences; // vector of adjacent differences 
    int n;
    string input;       // so any kind of input is accepted when filling list
    double nsum=0;  
    bool first = true;  // to skip the first difference (no adjacent item)
    double current, previous, diff;     // to keep track of previous (adjacent)
    
    cout << "Please enter the number of values you want to sum: ";
    cin >> n;
    if(!cin) error("Could not read an int value.");
    
    cout << "Please enter some doubles (press '|' to stop): ";
    while (cin >> input){ // exits with '|' or any non-int
        if(input=="|") break;
        series.push_back(input); 
    }

    if (n > series.size()) error("You entered insufficient numbers to make the sum.");

    for (int i=0; i<n;i++){ // extra loop to show stod error in a clearer way
        current = stod(series[i]); // throws stod error when input was not double
        if (!first) {
            diff = current - previous;
            differences.push_back(diff);
        }
        nsum += current; 
        previous = current;
        first = false; 
    }
   
    cout << "The sum of the first " << n << " doubles ( ";
    for (int i=0; i<n;i++) cout << series[i] << " ";
    cout << ") is " << nsum << ".\n";

    cout << "The vector of differences is ( ";
    for (double elem:differences) cout << elem << " ";
    cout << ").\n";

    return 0;   // success
}

catch(exception &e) {
    string whatout = e.what();
    if (whatout == "stod") cerr << "The result cannot be represented as a double.\n";
    else cerr << "error: " << whatout << "\n";
    keep_window_open();
    return 1;   // failure
}

catch (...){
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;   // failure
}