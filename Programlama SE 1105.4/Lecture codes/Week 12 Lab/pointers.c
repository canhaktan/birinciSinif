#include <stdio.h>

void make_five_1(int a) {
    a = 5;
}

int make_five_2(int a) {
    return 5;
}

void make_five_3(int *a) {
    *a = 5;
}

int add_1(int num1, int num2) {
    return num1 + num2;
}

void add_2(int *res, int num1, int num2) {
    *res = num1 + num2;
}

int main() {

    int a = 3;
    printf("  value of a = %d\n", a);
    printf("address of a = %p\n", &a);

    int *p = &a;
    printf("  value of a = %d\n", *p);
    printf("address of a = %p\n", p);

    // ********************************
    printf("-----------------------------\n");
    // ********************************

    int b = 3;
    printf("b = %d\n", b);
    make_five_1(b);
    printf("b = %d\n", b);
    b = make_five_2(b);
    printf("b = %d\n", b);
    make_five_3(&b);
    printf("b = %d\n", b);

    // ********************************
    printf("-----------------------------\n");
    // ********************************

    int c = 3, d = 5, res;
    res = add_1(c, d);
    printf("%d + %d = %d\n", c, d, res);
    add_2(&res, c, d);
    printf("%d + %d = %d\n", c, d, res);

    // ********************************
    printf("-----------------------------\n");
    // ********************************

    int arr[] = {1, 3, 5};

    printf("arr[0]: %d\n", arr[0]);
    printf("arr[1]: %d\n", arr[1]);
    printf("arr[2]: %d\n", arr[2]);
    printf("\n");
    printf("arr[0]: %d\n", *arr);
    printf("arr[1]: %d\n", *(arr + 1));
    printf("arr[2]: %d\n", *(arr + 2));

    // ********************************
    printf("-----------------------------\n");
    // ********************************

    return 0;
}