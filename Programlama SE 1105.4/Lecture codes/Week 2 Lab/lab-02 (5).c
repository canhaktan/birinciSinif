#include <stdio.h>

// single comment line

/*
 * Multi
 * line
 * comment
 */

// a function that called main which executes some program
int main() {
    printf("Hello, World!\n");
    printf("nana\na im batman\n");
    printf("first line.");
    printf("second line.\n");
    printf("third line. \n fourth line.\n");

    printf("orkun says: \"bla bla\"\n");
    printf("orkun says: 'bla bla'\n");

    printf("A\\B\n");
    printf("tab\tab\n");

    int var;
    var = 8;
    var =16;

    int var2 = 24;

    int number1, number2, sum;
    number1 = 10;
    number2 = 5;

    sum = number1 + number2 ;

    printf("sum of the %d and %d is %d\n", number1, number2, sum);

    printf("Please write a new number1:");
    scanf("%d", &number1);

    printf("Please write a new number2:");
    scanf("%d", &number2);

    int result;

    result = number1 - number2;
    printf("Subtraction of numbers are %d\n", result);

    printf("Subtraction of numbers are %d\n", number1-number2);

    result = number1 * number2;
    printf("Multiplication of numbers are %d\n", result);

    result = number1 / number2;
    printf("Division of numbers are %d\n", result);

    result = number1 % number2;
    printf("Modulo of numbers are %d\n", result);

    int variable, variable_name, variableName, VARIABLE, VARIABLE_NAME;

    return 0;
}
