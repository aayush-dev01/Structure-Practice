#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "Array elements: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nSum: " << sum << endl;

    return 0;
}