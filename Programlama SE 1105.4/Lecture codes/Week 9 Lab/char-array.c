#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_char_array(char arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

void print_random_word(int length) {
    for(int i = 0; i < length; i++) {
        printf("%c", rand() % (90 - 65) + 65);
    }
    printf("\n");
}

int main() {
     char my_name[] = {'E', 'L', 'I', 'F'};
    int size = sizeof(my_name) / sizeof(my_name[0]);
    print_char_array(my_name, size); */

    char c;
    c = 'A';
    printf("%c - %d\n", c, c);
    c = 'B';
    printf("%c - %d\n", c, c); */

    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c - %d\n", c, c);
    }

     for (char c = 'a'; c <= 'z'; c++) {
        printf("%c - %d\n", c, c);
    }

     srand(time(NULL));
    print_random_word(10);

    return 0;
}