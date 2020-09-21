#include "../../std_lib_facilities.h"


// 1. Point definition
struct Point{
    int x;
    int y;
};

// reading points (based on 10.11.2)
istream& operator>>(istream& is, Point& r)
{
    char ch1;
    if (is>>ch1 && ch1!='('){
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }
    char ch2, ch3;
    int x, y;
    is >> x >> ch2>> y >> ch3;
    if(!is || ch2!=',' || ch3!=')') error("bad reading");
    r.x = x;
    r.y = y; 
    return is;
}

int main(){
   
    // 2. Prompt user to input seven (x,y) pairs and save them in original_points
    vector<Point> original_points;
    cout << "Please enter three point coordinates in this format: (x,y): \n";
    for (int i= 0; i<3; i++){
        Point p;
        cout << "Type the coordinates of point " << i+1 << " and then press enter:";
        cin >> p;
        original_points.push_back(p);
    }
    // 3. Print data in original points
    cout << "Data from original points\n";
    for (Point p: original_points)
        cout << '(' << p.x << ',' << p.y << ")\n";

    // 4. Open an ofstream, write points to mydata.txt and close the ofstream
    ofstream ost{"mydata.txt"};
    if (!ost) error("can't open output file");
    for (Point p: original_points)
        ost << '(' << p.x << ',' << p.y << ")\n";
    ost.close();
    
    // 5. Open an ifstream for my data.txt, read data and store in processed_points 
    ifstream ist{"mydata.txt"};
    if (!ist) error("can't open input file");
    vector<Point> processed_points;
    // problem here
    for (Point p; ist>>p;){
        cout << p.x << "," << p.y;
        processed_points.push_back(p);
    }

    // 6. Print data in processed points
    cout << "\nData from processed points\n";
    for (Point p: processed_points)
        cout << '(' << p.x << ',' << p.y << ")\n";
    
    // 7. Compare the two vectors



}