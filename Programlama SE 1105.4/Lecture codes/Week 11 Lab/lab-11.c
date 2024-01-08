#include <stdio.h>

int size = 4;                                       // global variable

void make_size_5() {
    size = 5;                                       // size is global and can be reached in any scope
}

int main() {
    int multiples[][4] = {
        {2,   4,  6,  8},
        {3,   6,  9, 12},
        {5,  10, 15, 20},
        {7,  14, 21, 28},
        {11, 22, 33, 44},
    };

    for(int i = 0; i < 5; i++) {
        printf("multiples of %d: ", multiples[i][0]);
        for(int j = 0; j < 4; j++) {
            printf("%d ", multiples[i][j]);
        }
        printf("\n");
    }

    // *******************************************************************

    char student_names[4][100] = {                  // an array of character arrays (2D array)
        {'E', 'L', 'I', 'F', '\0'},
        {'O', 'R', 'K', 'U', 'N', '\0'},
        {'F', 'A', 'E', 'G', 'H', 'E', 'H', '\0'},
        {'D', 'I', 'N', 'D', 'A', 'R', '\0'},
    };

    for(int i = 0; i < 4; i++) {
        printf("%s\n", student_names[i]);
    }

    // *******************************************************************

    printf("size: %d\n", size);
    make_size_5();
    printf("size: %d\n", size);

    double const pi = 3.14;                             // constant variable
    // pi = 3.0;
    /* pi is global and can be reached in any scope
    uncommenting the line above will raise an error
    because constans cannot be changed */

    // *******************************************************************

}