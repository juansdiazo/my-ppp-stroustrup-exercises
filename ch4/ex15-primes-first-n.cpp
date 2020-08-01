#include "../std_lib_facilities.h"

bool isPrime(int test_number, vector<int> primes); // tests if a number is prime

int main(){
    vector<int> primes{2};      // Considering 2 as the first prime
    constexpr int first{3};     // first number to test
    constexpr int last{100};    // last number to test

    int n;    // first n prime numbers (set by user)

    cout << "\nPRIME NUMBERS!\n";
    cout << "Enter how many prime numbers you want to see: ";
    cin >> n;
    cout << "\nThe first " << n << " prime numbers are: "; 

    for(int test_number=first; primes.size()<n; test_number++)        // outer loop, from first to last  
        if(isPrime(test_number, primes)) primes.push_back(test_number); // inner loop, add if prime

    for(int prime:primes)       // print prime number list on screen
        cout << prime << " ";   
    cout << '\n';
}

bool isPrime(int test_number, vector<int> primes){
    for(int prime:primes)
        if (test_number%prime == 0) return false; // residual 0 when divided by number primes vector      
    return true;                                  // note: in this example all primes are < than test number
}