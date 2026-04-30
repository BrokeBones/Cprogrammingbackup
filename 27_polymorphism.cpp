#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { cout << "Shape\n"; }
};

class Circle : public Shape {
public:
    void draw() override { cout << "Circle\n"; }
};

int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
}
