#include <iostream>

int main() {
    int x = 5, y = -3; // Example values for x and y
    int c = x + y;
    c = c > 0 ? c : -c; // Absolute value of c
    int A[10];
    A[0] = 2 + c;
    for (int i = 1; i < 10; i++) {
        A[i] = 3;
    }

    // Print the array to verify
    for (int i = 0; i < 10; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}