
#include <iostream>
#include <vector>
using namespace std;

// O(1) - Constant Space
void constantSpace(int n) {
    int result = n * 2;
    cout << "O(1) Space: " << result << endl;
}

// O(n) - Linear Space
void linearSpace(int n) {
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    cout << "O(n) Space: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

// O(n^2) - Quadratic Space
void quadraticSpace(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    cout << "O(n^2) Space: Matrix created with "
         << n * n << " elements." << endl;
}

// O(log n) - Logarithmic Space
void logarithmicSpace(int n) {
    if (n <= 1) {
        cout << "O(log n) Space: Base case reached." << endl;
        return;
    }

    cout << n << " ";
    logarithmicSpace(n / 2);
}

int main() {
    int n = 8;

    cout << "SPACE COMPLEXITY DEMONSTRATION" << endl;
    cout << "Input size: " << n << endl << endl;

    constantSpace(n);
    linearSpace(n);
    quadraticSpace(n);

    cout << "O(log n) Space: ";
    logarithmicSpace(n);

    cout << endl;
    return 0;
}
