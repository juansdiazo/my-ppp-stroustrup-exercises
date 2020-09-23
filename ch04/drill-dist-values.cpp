#include "../std_lib_facilities.h"

int main(){
    
    // drill chapter 3: points 6 to 11
    
    double num, smallest, largest, num_in_m;
    double sum=0, accepted_nums=0;
    string unit;
    vector<double> numbers; // start empty (used at the end points 10-11)

    // conversion units
    constexpr double cm_to_m = 1.0/100;
    constexpr double in_to_m = cm_to_m * 2.54;
    constexpr double ft_to_m = in_to_m * 12;
    bool first=true;
    cout << "Enter distance value followed by the unit (cm, m, in, ft): ";

    while (cin>>num>>unit)
    {
        if (unit=="cm") num_in_m = num * cm_to_m;
        else if (unit=="m") num_in_m = num;
        else if (unit=="in") num_in_m = num * in_to_m;
        else if (unit=="ft") num_in_m = num * ft_to_m;
        else {
            cout << "Unrecognized unit, the only allowed unit representations are: cm, m, in, ft\n";
            continue;
        }
        if (first){ // set largest and smallest initial values
            cout << "The first accepted entry is " << num << unit << ", which is equivalent to " << num_in_m << "m\n";
            largest = num_in_m;
            smallest = num_in_m;
            first = false;
        } else {
            if(num_in_m>largest){
                largest = num_in_m;
                cout << "You entered " << num << unit << ", which is equivalent to " << num_in_m << "m (the largest distance so far)\n";
            } else if(num_in_m<smallest){
                smallest = num_in_m;
                cout << "You entered " << num << unit << ", which is equivalent to " << num_in_m << "m (the smallest distance so far)\n";
            } else {
                cout << "You entered " << num << unit << ", which is equivalent to " << num_in_m << "m\n"; 
            }    
        }
        sum += num_in_m; // update sum of values in meters
        accepted_nums++; // update number of accepted values
        numbers.push_back(num_in_m);
    }
    cout << "\nSUMMARY\n";
    cout << "The smallest entered distance was: " << smallest << "m\n";
    cout << "The largested entered distance was: " << largest << "m\n";
    cout << "The number of accepted values was: " << accepted_nums << '\n';
    cout << "The sum of all the distance values was: " << sum << "m\n";
    
    sort(numbers);
    cout << "Here is a list of the sorted entered distance values in meters: \n";
    for(double val:numbers)
        cout << val << '\t';
    cout << '\n';   
}