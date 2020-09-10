#ifndef MY_H
#define MY_H

// Here we declare the existence of the global variable foo
// so that each source file that includes this header knows about it.
// However it should be defined once in a source file (in this case in use.cpp)
// It is not the job of the compiler to know where it is, but of the linker.
extern int foo;         
void print_foo();
void print(int);

#endif   //end MY_H