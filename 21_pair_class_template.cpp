#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;
};

int main() {
    Pair<int, string> p = {1, "One"};
    cout << p.first << " " << p.second;
}
