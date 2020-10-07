#include <iostream>
#include <vector>
using namespace std;


int main(){
    // 1. Allocate an int, init to 7 and assign its address to a var p1
    int num{7};
    int *p1 = &num;

    // 2. Print out the value of p1 and of the int it points to
    cout << "value of p1 (address of num): "<< p1 << endl;
    cout << "points to (value of num): " << *p1 << endl;

    // 3. Allocate an array of seven ints; init. to 1,2,4,8; address to var p2
    //int p2[7]{1,2,4,8,16,32,64}; // alternative valid way (in stack - not in heap)
    int *p2 = new int[7]{1,2,4,8,16,32,64};
    
    // 4. Print value of p2 and the array it points to
    cout << "value of p2 (address of array[0]: "<< p2 << endl;
    cout << "point to (value of array[0]: "<< *p2 << endl;

    // 5. Create a pointer p3 and initialize it with p2
    int *p3 = p2;

    // 6. Assign p1 to p2
    p2 = p1;

    // 7. Assign p3 to p2
    p2 = p3;

    // 8. Print values of p1 and p2 and what they point to
    cout << "p1 has value of " << p1 << " and point to " << *p1 << endl;
    cout << "p2 has value of " << p2 << " and point to " << *p2 << endl;

    // 9. Deallocate all the memory you allocated from the free store
    delete[] p2;

    // 10. Allocate an array of ten ints; init. to 1,2,4,8; address to var p1
    p1 = new int[10]{1,2,4,8,16,32,64,128,256,512};

    // 11. Allocate an array of ten ints; address to var p2
    p2 = new int[10];

    // 12. Copy values from the array pointed to by p1 into the array pointed to by p2
    for (int i=0; i<10; i++){
        p2[i] = p1[i];
        cout << p2[i] << " ";
    }
    cout << endl;
    
    return 0;
}

