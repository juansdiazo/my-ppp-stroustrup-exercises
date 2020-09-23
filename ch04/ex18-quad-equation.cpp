#include "../std_lib_facilities.h"

int main(){
    double a, b, c;
    double x1, x2;
    cout << "QUADRATIC EQUATION SOLVER\nGiven a quadratic equation with the form: ax² + bx + c = 0\n";
    cout << "Enter the value of a: "; cin >> a;
    cout << "Enter the value of b: "; cin >> b;
    cout << "Enter the value of c: "; cin >> c;
    cout << "The solution to this equation is:\n";
    x1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
    cout << "x1 = " << x1 << ", x2 = " << x2 << '\n';
}