#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int grade;
};

int main() {
    Student s = {"John", 90};
    cout << s.name << " " << s.grade;
}
