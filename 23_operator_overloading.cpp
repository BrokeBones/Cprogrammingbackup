#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point operator+(Point p) {
        return {x + p.x, y + p.y};
    }
};

int main() {
    Point a{1,2}, b{3,4};
    Point c = a + b;
    cout << c.x << "," << c.y;
}
