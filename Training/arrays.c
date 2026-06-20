//
// Created by Abdirizak on 6/20/2026.
//

#include <stdio.h>
int main() {
    // int numbers[] = {10, 20, 30, 40, 50, 60};
    // printf("%d\n", numbers[4]);
    //
    // char grades[] = {'A', 'B', 'C', 'D', 'E'};
    // printf("%c\n", grades[3]);



    int arr[3] = {7, 14, 21};   // arr[i] == *(arr + i)
    int *p = arr;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));





    return 0;
}