#include <stdio.h>
#include "my_math.h"
#include <time.h>

int get_gcd(int a, int b) {
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int fib(int n) {
    if (n <=1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    printf("n | F(n) | Time (ms)\n");
    printf("--------------------\n");

    for(n = 5; n <= 40; n+=5) {
        clock_t start = clock();

        int f1 = fib(n);
        int f2 = fib(n-1);

        get_gcd(f1, f2);

        clock_t end = clock();
        double duration = (double)(end - start) / CLOCKS_PER_SEC *1000;

        printf("%d | %d | %.4f ms\n", n, f1, duration);
    }
    return 0;
}
