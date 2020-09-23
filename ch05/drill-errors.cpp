#include "../std_lib_facilities.h"

int main()

try{// Next 25 2-line code fragments are pairs of error-correction
    // 1
    // Cout << "Success!\n";
    // cout << "Success!\n";
    // 2
    // cout << "Success!\n;
    // cout << "Success!\n";
    // 3
    // cout << "Success" << !\n"
    // cout << "Success" << "!\n";
    // 4
    // cout << success <<'\n';
    // cout << "Success!" <<'\n';
    // 5
    // string res = 7; vector<int> v(10); v[5]=res; cout<<"Success!\n";
    // int res = 7;  v[5]=res; cout<<"Success!\n";
    // 6 
    // vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    // vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
    // 7
    // if (cond) cout << "Success!\n"; else cout<<"Fail!\n";
    // bool cond = true; if (cond) cout << "Success!\n"; else cout<<"Fail!\n";
    // 8
    // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; // no syntax errors
    // bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
    // 9
    // string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
    // string s = "ape"; bool c = "fool">s; if (c) cout << "Success!\n";
    // 10
    // string s = "ape"; if(s == "fool") cout << "Success!\n"; // no syntax errors
    // string s = "ape"; if(s != "fool") cout << "Success!\n"; 
    // 11
    // string s = "ape"; if(s == "fool") cout < "Success!\n"; 
    // string s = "ape"; if(s != "fool") cout << "Success!\n";
    // 12
    // string s = "ape"; if(s + "fool") cout < "Success!\n";
    // string s = "ape"; if(s != "fool") cout << "Success!\n";
    // 13
    // vector <char> v(5); for (int i=0; 0<v.size(); ++i); cout << "Success!\n"; // infinite loop
    // vector <char> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n"; 
    // 14
    // vector <char> v(5); for (int i=0; i<=v.size(); ++i); cout << "Success!\n"; // no compile or runtime error
    // vector <char> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n";
    // 15 
    // string s = "Success!\n"; for(int i=0; i<6; ++i) cout<<s[i]; // no compile error (logic error) 
    // string s = "Success!\n"; for(int i=0; i<s.length(); ++i) cout<<s[i]; 
    // 16
    // if (true) then cout << "Success!\n"; else cout << "Fail!\n";
    // if (true) cout << "Success!\n"; else cout << "Fail!\n";
    // 17
    // int x=2000; char c=x; if (c==2000) cout << "Success!\n"; // no compile error
    // int x=2000; char c=narrow_cast<char>(x); if (c==2000) cout << "Success!\n"; // error: info loss
    // int x=20; char c=narrow_cast<char>(x); if (c==20) cout << "Success!\n"; 
    // 18
    //string s = "Success!\n"; for(int i=0; i<10; ++i) cout<< s[i]; // no errors, but should be 9 (length)
    // string s = "Success!\n"; for(int i=0; i<9; ++i) cout<< s[i]; 
    // 19
    // vector v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n";
    // vector<int> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n";
    // 20
    // int i=0; int j=9; while(i<10) ++j; if (j<i) cout << "Success!\n"; // infinite loop
    // int i=0; int j=9; while(i<10) ++i; if (j<i) cout << "Success!\n";
    // 21
    // int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n"; // floating point exception (division by zero)
    // double x = 2.5; double d = 5/(x-2); if (d==2*x/0.5) cout << "Success!\n"; 
    // 22
    // string<char> s = "Success!\n"; for(int i=0; i<=10; +q+i) cout<<s[i];
    // string s = "Success!\n"; for(int i=0; i<=10; ++i) cout<<s[i];
    // 23
    // int i=0; while(i<10) ++j; if (j<i) cout << "Success!\n";
    // int i=0; int j=0; while(i<10) ++i; if (j<i) cout << "Success!\n";
    // 24
    // int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n"; // Success, but logical error (assignment statement is always true)
    // double x = 2.5; double d = 5/(x-2); if (d==2*x/0.5) cout << "Success!\n";
    // 25
    // cin << "Success!\n";
    // cout << "Success!\n";

    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << "\n";
    keep_window_open();
    return 1;
}

catch (...){
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}