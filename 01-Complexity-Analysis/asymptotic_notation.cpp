
#include <iostream>
using namespace std;

// Linear Search
// Best case: O(1)
// Worst case: O(n)
int linearSearch(int arr[], int n, int target, int &steps) {
    steps = 0;

    for (int i = 0; i < n; i++) {
        steps++;

        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

// Complete traversal
// Best case = Worst case = Theta(n)
void fullTraversal(int arr[], int n, int &steps) {
    steps = 0;

    for (int i = 0; i < n; i++) {
        steps++;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    int steps;
    int target;

    cout << "ASYMPTOTIC NOTATION DEMONSTRATION\n\n";

    // Best case
    target = 10;
    int result = linearSearch(arr, n, target, steps);

    cout << "Best Case (Omega(1)):\n";
    cout << "Target: " << target << endl;
    cout << "Position: " << result << endl;
    cout << "Comparisons: " << steps << "\n\n";

    // Worst case
    target = 100;
    result = linearSearch(arr, n, target, steps);

    cout << "Worst Case (O(n)):\n";
    cout << "Target: " << target << endl;
    cout << "Position: " << result << endl;
    cout << "Comparisons: " << steps << "\n\n";

    // Tight bound
    fullTraversal(arr, n, steps);

    cout << "Tight Bound (Theta(n)):\n";
    cout << "Elements traversed: " << steps << endl;

    return 0;
}
