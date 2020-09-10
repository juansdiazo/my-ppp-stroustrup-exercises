#include "my.h"
#include "../../std_lib_facilities.h"

void print_foo(){
    cout << "global variable (foo): " << foo << '\n';
}

void print(int i){
    cout << "local variable (i): " << i << '\n';
}