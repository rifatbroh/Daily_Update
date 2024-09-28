#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string model;
        int year;
        int speed;
    public:
        // Constructor with correct parameter types
        Car (string m, int y, int s)
        {
            model = m;
            year = y;
            speed = s;
        }

        void input() {
            cin >> speed;
        }

        void accelerate(int x) {
            speed += x;
        }

        void brake() {
            speed--;
        }

        void display() {
            cout << "Final speed: " << speed << endl;
        }
};

int main() {
    // Creating an object with initial values
    Car obj("ModelX", 2020, 50);
    obj.input();
    obj.accelerate(10);
    obj.brake();
    obj.display();
    return 0;
}
