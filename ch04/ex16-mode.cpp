#include "../std_lib_facilities.h"

int main(){
      
    int num, previous;
    int mode_counter{0},num_counter{0};
    vector<int> numbers; // start empty 
    vector<int> modes; // To accept more than one mode
    bool first{true};
    cout << "Enter a set of numbers separated by a space and \"done\" at the end:\n";
    while (cin>>num)
    {
        numbers.push_back(num);
    }
    sort(numbers);
    for(int num:numbers){
        if(first){ // only do this for the first element (initialize all vars)
            num_counter++;
            mode_counter=num_counter;
            modes.push_back(num);
            first=false;
        } else if (num == previous){ // current element is repeated
            num_counter++;
            if (num_counter > mode_counter){ // new mode with higher occurencies 
                modes.clear();
                modes.push_back(num);
                mode_counter = num_counter;
            } else if (num_counter == mode_counter){ // more than one mode 
                modes.push_back(num);
            }
        } else if (num != previous) num_counter = 1; // reset number counter
        previous = num; // do this always to compare in next iteration   
    }
    if (modes.size()==1) cout << "The mode is number " << modes[0] << " and it was repeated " << mode_counter << " times.\n";   
    else {
        cout << "The modes are: "; 
        for(int mode: modes) cout << mode << " ";
        cout << "\nThey were repeated " << mode_counter << " times.\n";   
    } 
}