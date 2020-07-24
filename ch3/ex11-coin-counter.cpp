#include "../std_lib_facilities.h"

int main(){
    double onecent, twocent, fivecent, tencent, twentycent, fiftycent, oneeuro, twoeuro;
    double moneysaved;
    cout << "Open your piggy bank and count all the coins.\n";
    
    cout << "Enter the number of one-cent coins that you counted: ";
    cin >> onecent;
    cout << "Enter the number of two-cent coins that you counted: ";
    cin >> twocent;
    cout << "Enter the number of five-cent coins that you counted: ";
    cin >> fivecent;
    cout << "Enter the number of ten-cent coins that you counted: ";
    cin >> tencent;
    cout << "Enter the number of twenty-cent coins that you counted: ";
    cin >> twentycent;
    cout << "Enter the number of fifty-cent coins that you counted: ";
    cin >> fiftycent;    
    cout << "Enter the number of one-euro coins that you counted: ";
    cin >> oneeuro;
    cout << "Enter the number of two-euro coins that you counted: ";
    cin >> twoeuro;

    moneysaved = onecent*0.01 + twocent*0.02 + fivecent*0.05 + tencent*0.1 + 
                 twentycent*0.2 + fiftycent*0.5 + oneeuro*1 + twoeuro*2;

    cout << "You saved a total of " << moneysaved << " Euro! Well done!\n"; 
}