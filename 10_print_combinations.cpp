#include <iostream>
using namespace std;

void comb(int n, int k, string s = "") {
    if (k == 0) {
        cout << s << endl;
        return;
    }
    for (int i = n; i >= k; i--) {
        comb(i - 1, k - 1, s + to_string(i));
    }
}

int main() {
    comb(4, 2);
}
