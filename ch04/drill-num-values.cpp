#include "../std_lib_facilities.h"

int main(){
    
    // drill chapter 3: points 1 to 5
    // int num1, num2;
    double num1, num2; 
    constexpr double diff=1.0/100; 

    cout << "Enter a pair of int values separated by a space and then hit enter:\n";

    while(cin>>num1>>num2)
    {
        cout << "The values you entered are: " << num1 << " " << num2 << '\n'; 
        if (num1>num2) 
        {
            cout << "the smaller value is " << num2 << '\n'; 
            cout << "the larger value is " << num1 << '\n';
            if ( (num1 - num2) < diff) 
                cout << "the numbers are almost equal\n";
        } else if (num2>num1) { 
            cout << "the smaller value is " << num1 << '\n';
            cout << "the larger value is " << num2 << '\n';
            if ( (num2 - num1) < diff) 
                cout << "the numbers are almost equal\n";
        } else if (num1==num2) { 
            cout << "the numbers are equal\n";
        }
    }
}