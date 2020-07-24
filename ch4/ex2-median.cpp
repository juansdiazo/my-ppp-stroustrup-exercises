#include "../std_lib_facilities.h"

int main(){
    vector<double> temps;           // temperatures vector
    
    cout << "Enter temperature values separated by space (end with stop):  ";
    
    for(double temp; cin>> temp;)   // read into vector
    {                               // true if value was read correctly and false otherwise (e.g. char input)
        temps.push_back(temp);      // put temp into vector
    }

    //compute median temperature:
    sort(temps);
    cout << "Median temperature: " << '\n';
    if (temps.size()%2==0){
        cout << (temps[temps.size()/2 - 1] + temps[temps.size()/2])/2 << '\n';
    } else {
        cout << temps[temps.size()/2] << '\n';
    }
}