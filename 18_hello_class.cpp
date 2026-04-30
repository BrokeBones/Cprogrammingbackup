#include <iostream>
using namespace std;

class Hello {
public:
    void say() { cout << "Hello Class!" << endl; }
};

int main() {
    Hello h;
    h.say();
}
