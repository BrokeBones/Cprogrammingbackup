#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void show() { cout << brand << endl; }
};

int main() {
    Car c;
    c.brand = "Toyota";
    c.show();
}
