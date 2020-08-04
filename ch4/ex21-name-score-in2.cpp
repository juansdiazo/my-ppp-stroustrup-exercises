#include "../std_lib_facilities.h"

int main(){
    vector<string> names;
    vector<int> scores;
    string name;
    int score;
    bool empty=true;
    
    cout << "Type a pair: name score (e.g: juan 3)\n";
    cout << "To end entering pairs, type: NoName 0\n";
    cout << "Please don't repeat names!\n";
    while (cin>>name>>score){
        for (string x:names) if(name == x) error("Error: Name entered twice\n");       
        if (name=="NoName" && score==0) break;
        names.push_back(name);
        scores.push_back(score);
    }
    cout << "\nNow just type one score: "; 
    cin >> score;
    cout << "Name(s):\n";
    for (int i=0;i<scores.size();i++){ 
        if (scores[i]==score){
            cout << names[i] <<'\n';
            empty=false;
        }
    }
    if(empty) cout << "score not found\n";
}