#include <iostream>
using namespace std;

int sumatory(int n) {
    int s = 0;
    if (n <= 0) return 0;
    for (int i = n; i > 0; i--) {
        s += i;
    }
    return s;
}

int alg(int x, int y) {
    int sum = x + y;
    int rowS = sumatory(sum) + 1;
    return rowS + x;
}

int main() {
    
    int tests, x, y;
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        cin >> x >> y;
        cout << alg(x, y) << endl;
    }
    
    return 0;
}
