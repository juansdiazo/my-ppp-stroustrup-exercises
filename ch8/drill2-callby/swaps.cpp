#include "swaps.h"
#include "../../std_lib_facilities.h"

void swap_v(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a,int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/* Does not compile as variables passed are changed in body, and they are constant
void swap_cr(const int& a,const int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
*/

