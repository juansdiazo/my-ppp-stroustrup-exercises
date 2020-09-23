#include "../std_lib_facilities.h"

int main(){
    vector<string> words;           // words vector
    
    cout << "Enter list of words (end with ctrl+d):  ";
    
    for(string word; cin>> word;)   // read into vector
    {                               // true if value was read correctly and false otherwise (ctrl+d)
        words.push_back(word);      // put word into vector
    }

    cout << "Number of words entered: " << words.size() << '\n';

    sort(words);                    // sort the words

    cout << "\nSorted list of non-repeated words: \n";
    // test for word repetition
    for (int i=0; i<words.size(); i++)
        if ( i==0 || words[i-1]!=words[i] ) // true in first word or new word (different than previous)
            cout << words[i] << '\n'; 
}