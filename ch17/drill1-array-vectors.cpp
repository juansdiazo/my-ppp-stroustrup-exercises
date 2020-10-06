#include <iostream>
#include <vector>
using namespace std;

void print_array10(ostream& os, int* a);
void print_array(ostream& os, int* a,int n);
void print_vector(ostream& os, vector<int> &vec);

int main(){
    // 1. Allocate an array of 10 ints on the free store using new
    //int *p = new int[10]{1,2,3,4,5,6,7,8,9,10};
    constexpr int s = 10;
    int *p = new int[s];

    // 2. Print the values of the 10 ints to cout
    for (int i=0;i<s;i++) cout << p[i] <<" ";
    cout << endl;

    // 3. Deallocate the array using delete[]
    delete[] p;

    // 4. write function print_array10 

    // 5. Allocate an array of 10 ints on the free store; initialize it with the values
    //    100,101,102,etc and print out its values
    int *q = new int[s]{100,101,102,103,104,105,106,107,108,109};
    print_array10(cout,q); 
    delete[] q;

    // 6. Allocate an array of 11 ints on the free store; initialize it and print its values
    int *r = new int[11]{1,2,3,4,5,6,7,8,9,10,11};
    for (int i=0;i<11;i++) cout << r[i] << " ";
    cout << endl;
    delete[] r;

    // 7. write function print_array

    // 8. Allocate an array of 20 ints on the free store; initialize it with the values
    //    100,101,102,etc and print out its values 
    int *t = new int[20]{100,101,102,103,104,105,106,107,108,109,
                         110,111,112,113,114,115,116,117,118,119};
    print_array(cout,t,20);
    delete[] t;

    // 9. Delete arrays (all deleted after printing)

    // 10. Do exercises 5,6, and 8 using a vector instead of an array 
    //     and a print_vector instead of print_array
    
    vector<int> vec10{100,101,102,103,104,105,106,107,108,109};     // Ex.5
    vector<int> vec11{1,2,3,4,5,6,7,8,9,10,11};                     // Ex.6
    vector<int> vec20{100,101,102,103,104,105,106,107,108,109,      // Ex.8
                      110,111,112,113,114,115,116,117,118,119};
    print_vector(cout,vec10);
    print_vector(cout,vec11);
    print_vector(cout,vec20);

    return 0;
}

// 4. Write a function that prints out the values of a (assumed to have 10 elements) to os
void print_array10(ostream& os, int* a){
    for (int i=0;i<10;i++) os << a[i] << " ";
    os << endl;
}

// 7. Write a function that prints out the values of a (assumed to have n elements) to os
void print_array(ostream& os, int* a,int n){
    for (int i=0;i<n;i++) os << a[i] << " ";
    os << endl;
}

// 10. Write print_vector instead of print_array
void print_vector(ostream& os, vector<int> &vec){ 
    for (int el:vec) os << el << " ";
    os << endl;
}