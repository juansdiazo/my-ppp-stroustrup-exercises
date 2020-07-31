
// Find primes using "Sieve of Erastothenes" method 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int max;    // last number to test (set by user)

    int current{0}, prime{2}, idx{0};   // Initialize variables
    bool stop = false;                  // to stop outer loop

    cout << "\nPRIME NUMBERS (Sieve of Erastothenes)\n";
    cout << "Enter an upper limit number: ";
    cin >> max;
    cout << "\nThe prime numbers from 1 to " << max << " are: ";

    vector<char> check_list(max);       // list with check values (vector of bools not possible)
    fill (check_list.begin(),check_list.end(),'u'); // u: unmarked, p:prime, c:composite(not prime)    
    check_list[0] = 'c';   // 1 is not prime
    check_list[1] = 'p';   // 2 is prime

    // outer loop: mark all numbers in range with composite or prime 
    while (!stop){

        // inner loop 1: mark prime factors of current prime as composite (not prime)
        current = prime;
        for (int step=2; current<=max; step++){
            current = prime*step;  
            check_list[current-1] = 'c';  // marked as not prime
        } 

        // inner loop 2: search for next prime
        for (idx=prime; idx<max; idx++){ // search next prime (next number unmarked)
            if(idx==(max-1) ) { // when last element to mark
                if (check_list[idx]=='u') check_list[idx] = 'p'; // check if it is prime
                stop = true; // finish outer loop
            } else if (check_list[idx]=='u'){ // if unmarked means it is prime
                check_list[idx] = 'p'; // mark as prime
                prime = idx+1; // use for next iteration of outer loop
                break;
            }
        }
    }
    
    for(int i=0; i<check_list.size(); i++){       // print prime number list on screen
        if(check_list[i] == 'p') cout  << i+ 1 << " ";
    }   
    cout << '\n';
    
}

