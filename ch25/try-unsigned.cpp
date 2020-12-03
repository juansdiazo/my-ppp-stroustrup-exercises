#include <iostream>
#include <vector>
using namespace std;

template<typename T> void print(T i) { 
    cout<<i<<'\t';
}

void print(char i){
    cout<<int(i)<<'\t';
}

void print(signed char i){
    cout<<int(i)<<'\t';
}

void print(unsigned char i){
    cout<<int(i)<<'\t';
}

int main(){
    int si = 131;
    char c = si;
    unsigned char uc = si;
    signed char sc = si;
    print(si); print(c); print(uc);print(sc); cout<<endl; 

    unsigned int ui1 = -1;
    int si1 = ui1;
    int si2 = ui1 + 2;
    unsigned ui2 = ui1 + 2;
    print(ui1); print(si1);print(ui2); print(si2); cout<<endl; 

    cout << endl;
    for(char c=0;c!=-1;++c){
        cout << int(c) << ' ';
    }
    cout << '\n'; 
}