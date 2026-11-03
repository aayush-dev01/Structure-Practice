#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 15, y = 25;

    cout << "Sum: " << add(x, y) << endl;

    return 0;
}