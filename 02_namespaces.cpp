#include <iostream>

namespace A {
    int value = 10;
}

namespace B {
    int value = 20;
}

int main() {
    std::cout << A::value << " " << B::value << std::endl;
    return 0;
}
