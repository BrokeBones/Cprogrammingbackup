#include <iostream>
using namespace std;

class Point3D {
public:
    int x, y, z;
};

int main() {
    Point3D p{1,2,3};
    cout << p.x << "," << p.y << "," << p.z;
}
