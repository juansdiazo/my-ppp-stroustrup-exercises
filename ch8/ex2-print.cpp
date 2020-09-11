#include "../std_lib_facilities.h"

void print(const string &label, const vector<int> &myvector){
    cout << label << " : ";
    for(int el:myvector){
        cout << el << " ";
    }
    cout << '\n';
}

int main(){
    vector<int> lotto{12, 43, 56, 11, 9, 4};
    print("Lotto numbers", lotto);
}