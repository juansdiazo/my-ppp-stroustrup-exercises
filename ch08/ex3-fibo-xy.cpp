#include<iostream>
#include<vector>

using namespace std;

void print(const string &label, const vector<int> &myvector);

void fibonacci(int x, int y, vector<int> &v, int n);

int main(){
    vector<int> myvector;
    fibonacci(1,1, myvector, 10);
    print("Fibonacci-like series", myvector);
}

// prints a prompt string and the contents of a vector
void print(const string &label, const vector<int> &myvector){
    cout << label << " : ";
    for(int el:myvector) cout << el << " ";
    cout << '\n';
}

// generates a fibonacci-like sequence of n numbers
// given the first (x) and the second (y) elements of the sequence
void fibonacci(int x, int y, vector<int> &v, int n){
    v.push_back(x);
    v.push_back(y);    
    for (int i=2; i<n; i++) v.push_back(v[i-2] + v[i-1]);
}