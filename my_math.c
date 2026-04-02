#include "my_math.h"
#include <stdio.h>
// 두 정수를 더하는 함수입니다.
my_integer add_int(my_integer i, my_integer j) {
    return i + j;
}
// 두 정수를 빼는 함수입니다.
my_integer minus_int(my_integer i, my_integer j) {
    if (i < j) return 0; 
    return i - j;
}
// 두 정수를 곱하는 함수입니다.
my_integer mult_int(my_integer i, my_integer j) {
    return i * j;
}
// 두 정수를 나누는 함수입니다.
my_integer divid_int(my_integer i, my_integer j) {
    if (j == 0) return 0; 
    return i / j;
}
// GCD를 구하는 함수입니다.
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
// LCM를 구하는 함수입니다
int get_lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / get_gcd(a, b);
}