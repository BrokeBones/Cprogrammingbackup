#include <iostream>
using namespace std;

struct Route {
    string start, end;
};

int main() {
    Route r = {"A", "B"};
    cout << r.start << " -> " << r.end << endl;
}
