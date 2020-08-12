#include "../std_lib_facilities.h"

void print_sum(vector<int> vec, string day);

int main()
try{
    string day;
    int value;
    vector<int> mon, tue, wed, thu, fri, sat, sun;  // 7 days of the week
    vector<int> rejected;                           // rejected values
    cout << "VALUES PER WEEKDAY\nEnter weekday value pairs (e.g. sunday 3)\n";
    cout << "Press ctrl+d when you are done entering pairs.\n";
    while (cin>>day>>value)    
    {
        if ( (day == "mon") || (day == "Mon") || (day == "monday") || (day == "Monday"))
            mon.push_back(value);
        else if ( (day == "tue") || (day == "Tue") || (day == "tuesday") || (day == "Tuesday"))
            tue.push_back(value);
        else if ( (day == "wed") || (day == "Wed") || (day == "wednesday") || (day == "Wednesday"))
            wed.push_back(value);
        else if ( (day == "thu") || (day == "Thu") || (day == "thursday") || (day == "Thursday"))
            thu.push_back(value);
        else if ( (day == "fri") || (day == "Fri") || (day == "friday") || (day == "Friday"))
            fri.push_back(value);
        else if ( (day == "sat") || (day == "Sat") || (day == "saturday") || (day == "Saturday"))
            sat.push_back(value);
        else if ( (day == "sun") || (day == "Sun") || (day == "sunday") || (day == "Sunday"))
            sun.push_back(value);
        else
            rejected.push_back(value);
    }
    print_sum(mon, "Monday");
    print_sum(tue, "Tuesday");
    print_sum(wed, "Wednesday");
    print_sum(thu, "Thursday");
    print_sum(fri, "Friday");
    print_sum(sat, "Saturday");
    print_sum(sun, "Sunday");
    cout << "There were " << rejected.size() << " rejected days-values.\n";

    return 0; // success
}

catch(exception &e){
    cerr << "error: " << e.what() << "\n";
    keep_window_open();
    return 1;   // failure
}

catch (...){
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;   // failure
}

void print_sum(vector<int> vec, string day){
    int sum = 0;
    cout << "The sum of the values in " << day << " is: ";
    for(int ele:vec) sum += ele;
    cout << sum << '\n';
}