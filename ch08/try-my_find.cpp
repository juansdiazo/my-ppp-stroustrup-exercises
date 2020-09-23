#include "../std_lib_facilities.h"

// int my_find(vector<string> vs, string s, int hint); // naming arguments
int my_find(vector<string>, string, int); // not naming arguments (equivalent to previous line)
int my_find(vector<string> vs, string s); // 3rd argument unused --> notice this is an overloading case

int main(){
    vector<string> numeros{"zero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete"};
    cout << "Found in position: " << my_find(numeros, "siete", 6) << '\n'; // called with all arguments 
    cout << "Found in position: " << my_find(numeros, "siete") << '\n';    // called w/o 3rd argument
}

// however in definition I must used naming arguments, so I can work with vars in function implementation
int my_find(vector<string> vs, string s, int hint){ 
    if (hint<0 || vs.size()<=hint) hint=0;
    for (int i=hint; i<vs.size(); ++i)      // search starting from hint
        if (vs[i]==s) return i;             
    if (0<hint){                            // if we did not find s, search before hint
        for (int i=0; i<hint; ++i)          // in this case (hint was not good)
            if (vs[i]==s) return i;
    }
    return -1; 
}

int my_find(vector<string> vs, string s){   // when user don't pass a third argument
    for (int i=0; i<vs.size(); ++i)         // search starting from 0
        if (vs[i]==s) return i;             // slower than hint (if hint was good)
    return -1; 
}