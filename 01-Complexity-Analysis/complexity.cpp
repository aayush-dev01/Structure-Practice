
#include <iostream>
using namespace std;

// O(1) - Constant Time
void constantTime(int n) {
    cout << "Constant Time: " << n << endl;
}

// O(n) - Linear Time
void linearTime(int n) {
    cout << "\nLinear Time: ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// O(n^2) - Quadratic Time
void quadraticTime(int n) {
    cout << "\nQuadratic Time:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
}

// O(log n) - Logarithmic Time
void logarithmicTime(int n) {
    cout << "\nLogarithmic Time: ";
    while (n > 1) {
        cout << n << " ";
        n /= 2;
    }
    cout << 1 << endl;
}

int main() {
    int n = 5;

    cout << "DSA - Time Complexity Demonstration\n";
    cout << "Input size: " << n << "\n";

    constantTime(n);
    linearTime(n);
    quadraticTime(n);
    logarithmicTime(n);

    return 0;
}
