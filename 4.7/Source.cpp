#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;


    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    
    cout << fixed;
    cout << "---------------------------------------------------" << endl;
    cout << "|   x   |   Arth(x)   |   S   |   n   |" << endl;
    cout << "---------------------------------------------------" << endl;

    
    x = xp;
    while (x <= xk) {
        n = 0;
        a = x;
        S = a;
        do {
            n++;
            R = (x * x * x) / ((2 * n + 1) * (2 * n)); 
            a *= R; 
            S += a; 
        } while (fabs(a) >= eps); 

       
        cout << "| " << setw(7) << setprecision(2) << x << " | "
            << setw(10) << setprecision(5) << atanh(x) << " | "
            << setw(7) << setprecision(5) << S << " | "
            << setw(5) << n << " |" << endl;

        x += dx;
    }

    cout << "---------------------------------------------------" << endl;

    return 0;
}
