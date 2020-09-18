// Example from chapter 10.5
#include"../../std_lib_facilities.h"

struct Reading {
    int hour;           // from 0 to 23
    int temperature;    // in celsius degrees
};

int main()
{
    cout << "Please enter input file name: ";  
    string in_file_name;
    cin >> in_file_name;            // sample file "2020-sep-18.csv"
    ifstream ist(in_file_name);     // ist read from the file named in_file_name
    if(!ist) error("can't open input file ", in_file_name);

    cout << "Please enter output file name: ";
    string out_file_name;
    cin >> out_file_name;
    ofstream ost(out_file_name);    // ost writes to a file named out_file_name
    if(!ost) error("can't open output file ", out_file_name);

    // Read from input file stream ist
    vector<Reading> measurements;   // store the readings here
    int hh, tt;
    while(ist >> hh >> tt){
        if (hh < 0 || hh > 23) error("Hour out of range!");
        measurements.push_back(Reading{hh,tt});
    }

    // Write to output file stream ost
    for (int i=0; i<measurements.size(); i++)
        ost << '(' << measurements[i].hour << ',' 
        << measurements[i].temperature << ")\n";
}