#include <cilk/cilk.h>
#include <stdio.h>

int fib(int n) {
    if (n < 2) return n;
    int x, y;
    x = cilk_spawn fib(n - 1); // Spawn a task for fib(n-1)
    y = fib(n - 2);            // Execute fib(n-2) in parallel
    cilk_sync;                 // Wait for both tasks to complete
    return x + y;
}

int main() {
    int result = fib(10);
    printf("Fibonacci(10) = %d\n", result);
    return 0;
}