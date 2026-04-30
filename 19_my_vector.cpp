#include <iostream>
using namespace std;

class MyVector {
    int arr[100], size = 0;
public:
    void push(int x) { arr[size++] = x; }
    void print() {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
    }
};

int main() {
    MyVector v;
    v.push(1); v.push(2);
    v.print();
}
