#include <iostream>
using namespace std;

class Base {
protected:
    int x = 5;
};

class Derived : public Base {
public:
    void show() { cout << x << endl; }
};

int main() {
    Derived d;
    d.show();
}
