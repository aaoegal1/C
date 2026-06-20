//
// Created by Abdirizak on 6/20/2026.
//

#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    int *p = &x;  // so saar value X - *p wuxuu hayaa addresska X

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);

    *p = 50; // badal qiimaha addresska X oo ahaa 5 u badal 50 so hada ouput X = 50

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);

    p = &y;  // u wareeg pointer laguu tilmaamay oo ah y

    printf("*p = %d\n", *p);


// &x → address-ka x
// p → pointer haya address
// *p → value-ga meesha pointer-ku tilmaamayo
// p = &y → pointer-ka dhaqaaq
// *p = value → xogta beddel

    return 0;
}