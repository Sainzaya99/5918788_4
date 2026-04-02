#ifndef MY_MATH_H
#define MY_MATH_H

typedef unsigned int my_integer;

extern my_integer add_int(my_integer i, my_integer j);
extern my_integer minus_int(my_integer i, my_integer j);
extern my_integer mult_int(my_integer i, my_integer j);
extern my_integer divid_int(my_integer i, my_integer j);

int get_gcd(int a, int b);
int get_lcm(int a, int b);

#endif