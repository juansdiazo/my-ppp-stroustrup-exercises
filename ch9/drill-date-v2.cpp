// Date version 2. From 9.4.2
#include"../std_lib_facilities.h"

struct Date {
    int y, m, d ;               // year, month, day
    Date(int y, int m, int d);  // check for valid date and initialize
    void add_day(int n);        // increase the Date by n days
};

Date::Date(int yy, int mm, int dd) {
    // Check that (y,m,d) is a valid date: year: [-4000, 4000], month [1,12], day [1,31] 
    if ((yy>-4001 && yy<4001) && (mm>0 && mm<12) && (dd>0 && dd<32)){
    // if it is, use it to initialize dd
        y = yy;
        m = mm;
        d = dd;    
    } else error("Invalid date!"); 
}

void Date::add_day(int n) {
    d+=n;    // increase dd by n days
}

ostream& operator << (ostream& os, const Date& d){
    return os << '(' << d.y
                << ',' << d.m
                << ',' << d.d << ')';
}

int main(){
    // 1. Define a Date called today initialized to June 25, 1978
    Date today{1978,6,25};

    // 2. Define a Date called tomorrow and give it a value by copying today into it
    Date tomorrow = today;

    // 3. Increase its day by one using add_day()
    tomorrow.add_day(1);

    // 4. Output today and tomorrow using a << defined as in 9.8
    cout << today << '\n';
    cout << tomorrow << '\n';

    // 5. Test with one invalid date
    Date wrong{2004,13,-5};

    return 0;
}