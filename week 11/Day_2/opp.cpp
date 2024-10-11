#include <bits/stdc++.h>
using namespace std;

class Volume {
  public:
    double calculate(double a) {
        return a * a * a;
    }
    double calculate(double r, double h) {
        return 3.1416 * r * r * h;
    }
    double calculateSphere(double r) {
        return (4.0 / 3.0) * 3.1416 * r * r * r;
    }
};

int main() {
    Volume v;
    cout << "Volume of cube: " << v.calculate(3) << endl;
    cout << "Volume of cylinder: " << v.calculate(3, 5) << endl;
    cout << "Volume of sphere: " << v.calculateSphere(3) << endl;

    return 0;
}
