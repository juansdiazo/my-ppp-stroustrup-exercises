#include "../std_lib_facilities.h"

int main(){
    vector<string> names;
    vector<int> scores;
    string name;
    int score;
    cout << "Type a pair: name score (e.g: juan 3)\n";
    cout << "To end type: NoName 0\n";
    cout << "Don't repeat names!\n";
    while (cin>>name>>score){
        for (string x:names) if(name == x) error("Error: Name entered twice\n");       
        if (name=="NoName" && score==0) break;
        names.push_back(name);
        scores.push_back(score);
    }
    cout << "The pairs entered were:\n";
    for (int i=0;i<names.size();i++) cout << "(" << names[i] << ", " << scores[i] <<")\n";
}