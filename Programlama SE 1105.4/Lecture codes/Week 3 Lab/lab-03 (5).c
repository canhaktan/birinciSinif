#include <stdio.h>

void sayHello() {
    printf("Hello!\n");
}

void add1(int a, int b) {
    printf("Result = %d\n", a + b);
}

int add2(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

void enter_bar(int age) {
    if (age < 18) {
        printf("No! You are too young.\n");
    } else if (age > 70) {
        printf("No! You are too old.\n");
    } else {
        printf("Yes! You can enter.\n");
    }
}

/*
 * Home Exercise
 * sub:
 *      A function that takes 2 integer parameters and returns the difference of them.
 * mul:
 *      A function that takes 2 integer parameters and returns the product of them.
 * div:
 *      A function that takes 2 integer parameters and returns the division of them.
 *      If the denominator is 0, it prints "Error" on the screen and returns -1.
 */

int main() {
    // **********************************************************************
    sayHello();

    // **********************************************************************
    int a = 3;
    int b = 5;

    // We see the result on the console. But we don't have the result here.
    add1(a, b);

    // **********************************************************************
    // We have the result (c) since we've returned it.
    int c = add2(a, b);
    printf("%d + %d = %d\n", a, b, c);

    // **********************************************************************
    enter_bar(16);
    enter_bar(82);
    enter_bar(25);

    return 0;
}

