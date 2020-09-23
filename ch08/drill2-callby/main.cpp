#include "swaps.h"
#include <iostream>

int main(){
    int x=7; 
    int y=9; 

    //const int x=7; // only acceptable when x or y are not changed (in swap_v)
    //const int y=9; // as they are declared as constants

    //double dx=7.7; // do not compile for swap_r (int references are expected, and doubles are passed)
    //double dy=9.9; // compiles for swap_v (value casted to int, and worked internally in function)
    
    swap_v(x,y); // accepts both variables (lvalues) and values (rvalues)
    std::cout<<"swap_v called\n";
    std::cout<<"Value of int x: "<<x<<'\n'; // however it only swaps internally
    std::cout<<"Value of int y: "<<y<<'\n'; // does not change the values of x and y
    
    swap_r(x,y); // accepts only variables (lvalues: x,y), not direct values (rvalues: 7,9)
    std::cout<<"swap_r called\n";
    std::cout<<"Value of int x: "<<x<<'\n';
    std::cout<<"Value of int y: "<<y<<'\n';

    // swap_cr funtion do not compile (in swaps.cpp), as const are tried to be changed in body 
}