//
// Created by Abdirizak on 6/14/2026.
//

#include <stdio.h>
int main() {

    //
    int x = 5;
    int a = 10;
    int b = 22;
    int c = 229;
    int d = 2004;
    int e = 0214;
    int f = 1234;

    //
    //
    printf("%d\n", x);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    //
    // // address-ka waxaa lagu helaa: &variable name
    //
    printf("%p\n", &x);
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);





     // x   -> 5 - value = 5
    //  p   -> address of x - address = 000000f89c1ffcc4
    &p  -> address of p - 0000000000000005
    int x = 5;
    int *p = &x;
    printf("value = %d\n", x);
    printf("address = %p\n", &x);
    printf("Pointer = %p\n", *p);
    printf("%p\n", p);

    return 0;

    int x = 5;
    int *p = &x;

    printf("%d\n", *p); // *p = Tag address-ka ku jira p,
                              // kadib soo qaad value-ga meeshaas yaal
//  1. p → 1000
//  2. Tag address 1000
//  3. Halkaas waxaa yaal 5
//  4. Soo celi 5
//


 int x = 5;
 int *p = &x;

 *p = 20;

 printf("%d\n", x); // ouput waa 20.
 printf("%d\n", *p);

 int x = 5;
 int y = 10;

 int *p = &x;

 p = &y; // Pointer-ka p hadda ha tilmaamo y

 printf("%d\n", *p);

 int x = 25;
 int *p = &x;

 printf("%d\n", x);
 printf("%d\n", *p);
 printf("%d\n", &x);






}