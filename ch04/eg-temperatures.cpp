#include "../std_lib_facilities.h"

int main(){
    vector<double> temps;           // temperatures vector
    
    cout << "Enter temperature values separated by space (end with stop):  ";
    
    for(double temp; cin>> temp;)   // read into vector
    {                               // true if value was read correctly and false otherwise (e.g. char input)
        temps.push_back(temp);      // put temp into vector
    }

    //compute mean temperature:
    double sum = 0;
    for (double x: temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() <<'\n';

    //compute median temperature:
    sort(temps);
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}