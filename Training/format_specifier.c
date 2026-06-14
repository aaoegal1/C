//
// Created by Abdirizak on 6/14/2026.
//

#include <stdio.h>
int main() {

    // Format specifier = special tokes that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data us displayed or interpreted.

    int  age = 21;
    float price = 19.99;
    double pi = 3.14159265335;
    char currency = '5';
    char name[] = "Abdirizak";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);



}