// Date version 4. From 9.7.1
#include"../std_lib_facilities.h"

// enum class Month --> error when printing the month as implicit conversion to int is not allowed
enum Month{
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date {
    public:
        Date(int y, Month m, int d);    // check for valid date and initialize
        
        int year() const { return y; }
        Month month() const { return m; }
        int day() const { return d; }

        void add_day(int n);            // increase the Date by n days
    private:
        Month m;
        int d, y;                   // day, year
        bool is_valid();            // return true if date is valid
};

Date::Date(int yy, Month mm, int dd) 
    : y{yy}, m{mm}, d{dd} {                         // initialize data members
        if (!is_valid()) error("Invalid date!");   // check for validity
}

bool Date::is_valid() {
    // Check that (y,m,d) is a valid date: year: [-4000, 4000], month [1,12], day [1,31] 
    if (y<-4000 || y>4000 || d<0 || d>31) return false; 
    else return true;
}

void Date::add_day(int n) {
    d+=n;    // increase dd by n days
}

ostream& operator<< (ostream& os, const Date& d){
    return os << '(' << d.year()
                << ',' << d.month()
                << ',' << d.day() << ')';
}

int main(){
    // 1. Define a Date called today initialized to June 25, 1978
    Date today{1978,Month::jun,25};

    // 2. Define a Date called tomorrow and give it a value by copying today into it
    Date tomorrow = today;

    // 3. Increase its day by one using add_day()
    tomorrow.add_day(1);

    // 4. Output today and tomorrow using a << defined as in 9.8
    cout << today << '\n';
    cout << tomorrow << '\n';

    // 5. Test with one invalid date
    Date wrong{2004,Month::jun,-5};

    return 0;
}