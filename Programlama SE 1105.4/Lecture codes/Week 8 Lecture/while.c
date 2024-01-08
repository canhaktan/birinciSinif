#include <stdio.h>

int main() {

    // for loop
    /* for(int i = 0; i < 10; i++) {
        printf("Hello\n");
    } */

    // for loop without declaration
    /* int i;
    for(i = 0; i < 10; i++) {
        printf("Hello\n");
    } */

    // for loop without declaration and one-time executed statement
    /* int i = 0;
    for(; i < 10; i++) {
        printf("%d\n", i);
    } */

    // for loop without declaration and one-time executed and every-time executed statement
    /* int i = 0;
    for(; i < 10;) {
        printf("%d\n", i);
        i++;
    } */

    // for loop without declaration and one-time executed and every-time executed statement and condition
    /* int i = 0;
    for(; ;) {
        if(i >= 10) {
            break;
        }
        printf("%d\n", i);
        i++;
    } */

    /* int i = 0;
    while(i < 10) {
        printf("%d\n", i);
        i++;
    } */

    /* int i = 1000;
    do {
        printf("%d\n", i);
        i++;
    } while(i < 10); */

    return 0;
}