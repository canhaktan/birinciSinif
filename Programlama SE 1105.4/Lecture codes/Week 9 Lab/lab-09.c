#include <stdio.h>

void print_uppercase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i] - 32);
    }
    printf("\n");
}

void print_reversed_1(char str[], int size) {
    for(int i = size - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void print_reversed_2(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++); // Just increments i to the end to get the length.
    while(i >= 0) {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");
}

int main() {

    print_uppercase("hello");
    print_reversed_1("hello", 5);
    print_reversed_2("hello");

    return 0;
}