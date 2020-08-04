#include "../std_lib_facilities.h"

int main(){
    vector<string> names;
    vector<int> scores;
    string name;
    int score;
    bool found=false;
    
    cout << "Type a pair: name score (e.g: juan 3)\n";
    cout << "To end entering pairs, type: NoName 0\n";
    cout << "Please don't repeat names!\n";
    while (cin>>name>>score){
        for (string x:names) if(name == x) error("Error: Name entered twice\n");       
        if (name=="NoName" && score==0) break;
        names.push_back(name);
        scores.push_back(score);
    }
    cout << "\nNow just type one name: "; 
    cin >> name;
    for (int i=0;i<names.size();i++){ 
        if (names[i]==name){
            cout << "score: " << scores[i] <<'\n';
            found=true;
            break;
        }
    }
    if(!found) cout << "name not found\n";
}