#include <iostream>

int main() {
    int x = 1, y = 2;
    int c = x + y;
    int b = 2;
    int a;
    int A[10];
    for (int i = 0; i < 10; i++) {
        if (c > 0) {
            a = b + c;
            c = -1;
        } else {
            a = b - c;
            c = 1;
        }
        A[i] = a;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}