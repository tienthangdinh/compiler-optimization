#include <omp.h>
#include <stdio.h>

int fib(int n) {
    if (n < 2) return n;
    int x, y;
    #pragma omp task shared(x)
    x = fib(n - 1); // Create a task for fib(n-1)
    #pragma omp task shared(y)
    y = fib(n - 2); // Create a task for fib(n-2)
    #pragma omp taskwait // Wait for both tasks to complete
    return x + y;
}

int main() {
    int result;
    #pragma omp parallel
    {
        #pragma omp single
        result = fib(10); // Only one thread executes fib
    }
    printf("Fibonacci(10) = %d\n", result);
    return 0;
}