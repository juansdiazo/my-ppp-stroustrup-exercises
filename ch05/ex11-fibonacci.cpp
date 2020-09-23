#include "../std_lib_facilities.h"

int main()
try{
    int n;
    int current;
    vector<int> fibo = {1,1};
    cout << "How many elements of the Fibonacci numbers do you wish to see? ";
    cin >> n;
    if (!cin) error ("You entered an invalid input (an integer number was expected)\n");
    if (n < 0) error ("A negative number is not valid");

    if (n==0)
    {
        cout << "There are no elements in an empty series.\n";
    } else if (n==1){
        cout << "The first element of the Fibonacci series is " << fibo[0]<< '\n';
    } else if (n==2){
        cout << "The first 2 elements of the Fibonacci series are: " << fibo[0] << " " << fibo[1] << '\n';
    } else if (n>2){
        cout << "The first " << n << " elements of the Fibonacci series are: " << fibo[0] << " " << fibo[1] << " ";
        for (int i=2; i<n; i++){
            current = fibo[i-2] + fibo[i-1];
            if (current < 0) error("\nNext number don't fit in an int "); // > 46, max int possible: __INT_MAX__    
            cout << current << " " ; 
            fibo.push_back(current);
        }
        cout << '\n';
    }
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << "\n";
    keep_window_open();
    return 1;   // failure
}

catch (...){
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;   // failure
}