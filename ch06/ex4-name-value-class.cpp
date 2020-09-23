#include "../std_lib_facilities.h"

class Name_value{
    public:
        string name;
        int score;
    Name_value(string nm, int sc)     // make a pair from a name and a score
        :name(nm), score(sc) { }
};

int main(){
    vector<Name_value> pairs;
    string name;
    int score;
    cout << "Type a pair: name score (e.g: juan 3)\n";
    cout << "To end type: NoName 0\n";
    cout << "Don't repeat names!\n";
    while (cin>>name>>score){
        for (Name_value p: pairs) if(name == p.name) error("Error: Name entered twice\n");       
        if (name=="NoName" && score==0) break;
        Name_value pair{name,score};
        pairs.push_back(pair);
    }
    cout << "The pairs entered were:\n";
    for (Name_value p: pairs) cout << "(" << p.name << ", " << p.score <<")\n";
}