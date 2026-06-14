//
// Created by Abdirizak on 6/14/2026.
//

#include <stdio.h>
int main() {

    // Format specifier = special tokes that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data us displayed or interpreted.

    // int  age = 21;
    // float price = 19.99;
    // double pi = 3.14159265335;
    // char currency = '5';
    // char name[] = "Abdirizak";
    //
    // printf("%d\n", age);
    // printf("%f\n", price);
    // printf("%lf\n", pi);
    // printf("%c\n", currency);
    // printf("%s\n", name);
    //
    //


    // Width  (%04d or %+d)

    // int num1 = 1;
    // int num2 = 10;
    // int num3 = 100;
    //
    // printf("%04d\n", num1);
    // printf("%04d\n", num2);
    // printf("%04d\n", num3);


    // Precision (%.2 = print only two degit after the decimal)

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

}