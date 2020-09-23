// min, max, and mode of a sequence of strings
// note: a natural improvement is to implement these facilities as functions
#include "../std_lib_facilities.h"

int main(){
    string word, previous;
    int mode_counter{0}, word_counter{0}, min{100}, max{0};
    vector<string> strings; // start empty 
    vector<string> modes, mins, maxs; // To accept more than one mode
    bool first{true};
    cout << "Enter a set of strings separated by a space and CTRL+D to end:\n";
    while (cin>>word)
    {
        strings.push_back(word);
    }
    sort(strings);
    for(string word:strings){
        if(first){ // only do this for the first element (initialize all vars)
            word_counter++;
            mode_counter = word_counter;
            min = word.length();
            max = word.length();
            modes.push_back(word);
            mins.push_back(word);
            maxs.push_back(word);
            first=false;
        } else if (word == previous){ // current element is repeated
            word_counter++;
            if (word_counter > mode_counter){ // new mode with higher occurencies 
                modes.clear();
                modes.push_back(word);
                mode_counter = word_counter;
            } else if (word_counter == mode_counter) modes.push_back(word);
        } else if (word != previous){
            word_counter = 1; // reset string counter
            
            // check if minimum
            if (word.length() < min){ // new min 
                mins.clear();
                mins.push_back(word);
                min = word.length();
            } else if (word.length() == min) mins.push_back(word);

            // check if maximum
            if (word.length() > max){ // new max
                maxs.clear();
                maxs.push_back(word);
                max = word.length();
            } else if (word.length() == max) maxs.push_back(word);
        }
        previous = word; // do this always to compare in next iteration   
    }
    cout<<"\nSTRINGS STATS SUMMARY\n";
    // print mode(s)
    if (modes.size()==1) cout << "The mode is string: " << modes[0] << "\nIt was repeated " << mode_counter << " times.\n";   
    else {
        cout << "The modes are strings: "; 
        for(string mode: modes) cout << mode << " ";
        cout << "\nThey were repeated " << mode_counter << " times.\n";   
    } 

    // print min(s)
    if (mins.size()==1) cout << "The shortest string is: " << mins[0] << "\nIt has " << mins[0].length() << " letter(s).\n";   
    else {
        cout << "The shortest strings are: "; 
        for(string str: mins) cout << str << " ";
        cout << "\nThey have " << mins[0].length() << " letter(s).\n";   
    }

    // print max(s)
    if (maxs.size()==1) cout << "The largest string is: " << maxs[0] << "\nIt has " << maxs[0].length() << " letters.\n";   
    else {
        cout << "The largest strings are: "; 
        for(string str: maxs) cout << str << " ";
        cout << "\nThey have " << maxs[0].length() << " letters.\n";   
    }


}

