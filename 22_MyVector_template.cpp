#include <iostream>
using namespace std;

template <typename T>
class MyVector {
    T arr[100];
    int size = 0;
public:
    void push(T x) { arr[size++] = x; }
    void print() {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
    }
};

int main() {
    MyVector<int> v;
    v.push(10);
    v.print();
}
