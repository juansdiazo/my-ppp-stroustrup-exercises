// Date version 1. From 9.4.1
#include"../std_lib_facilities.h"

struct Date {
    int y;  // year
    int m;  // month in a year
    int d;  // day of month
};

void init_day(Date& dd, int y, int m, int d) {
    // Check that (y,m,d) is a valid date: year: [-4000, 4000], month [1,12], day [1,31] 
    if ((y>-4001 && y<4001) && (m>0 && m<13) && (d>0 && d<32)){
    // if it is, use it to initialize dd
        dd.y = y;
        dd.m = m;
        dd.d = d;    
    } else error("Invalid date!"); 
}

void add_day(Date& dd, int n) {
    dd.d+=n;    // increase dd by n days
}

ostream& operator << (ostream& os, const Date& d){
    return os << '(' << d.y
                << ',' << d.m
                << ',' << d.d << ')';
}

int main(){
    // 1. Define a Date called today initialized to June 25, 1978
    Date today;
    init_day(today,1978,6,25);

    // 2. Define a Date called tomorrow and give it a value by copying today into it
    Date tomorrow = today;

    // 3. Increase its day by one using add_day()
    add_day(tomorrow, 1);

    // 4. Output today and tomorrow using a << defined as in 9.8
    cout << today << '\n';
    cout << tomorrow << '\n';

    // 5. Test with one invalid date
    Date wrong;
    init_day(wrong,2004,13,-5);

    return 0;
}