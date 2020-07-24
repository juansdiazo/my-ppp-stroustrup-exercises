#include "../std_lib_facilities.h"

int main (){
    vector<double> route;
    double distance;
    double sum=0;
    
    cout << "Enter distance values separated by space (end with char): ";
    while (cin>>distance){
        route.push_back(distance); 
    }
    for (double x:route) sum+= x;
    cout << "The total route distance is: " << sum << '\n';
    cout << "The mean distance between cities is: " << sum/route.size() << '\n';
    sort(route);
    cout << "The smallest distance is:  " << route[0] << '\n';
    cout << "The largest distance is:  " << route[route.size() - 1] << '\n';
}