#include <iostream>
using namespace std;

struct Lecture {
    string topic;
    int duration;
};

int main() {
    Lecture l = {"C++ Basics", 60};
    cout << l.topic << " " << l.duration << endl;
}
