#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { cout << "Animal sound\n"; }
};

class Dog : public Animal {};

int main() {
    Dog d;
    d.speak();
}
