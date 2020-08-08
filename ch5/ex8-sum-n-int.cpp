#include "../std_lib_facilities.h"

int main(){
    vector<int> series;
    int n;
    int input;
    int nsum=0;
    cout << "Please enter the number of values you want to sum: ";
    cin >> n;
    cout << "Please enter some integers (press '|' to stop): ";
    while (cin>>input){
        series.push_back(input); 
    }
    if(n>series.size()) error("You entered insufficient numbers to make the sum.");
    cout << "The sum of the first " << n << " numbers ( ";
    for (int i=0; i<n;i++){
        cout << series[i] << " ";
        nsum += series[i]; 
    }
    cout << ") is " << nsum << " " << series.size() << " .\n";
}