#include <stdio.h>
#include <math.h>

int reversefunc (int number,int originalnum,int reverse,int kalan) {
    originalnum = number;
    while (number != 0) {
        kalan = number % 10;
        reverse = reverse * 10 + kalan;
        number /= 10;
    }
    printf("\nThe reverse of the number = %d\n", reverse);
    int sum = originalnum + reverse;
    printf("\nThe reverse of the number + the number: %d \n", sum);
    int a = sqrt(sum);
    if (a == sqrt(sum)) {
        printf("\n  _______________________________________");
        printf("\n  |   LETS GO, y^2 = %d                 |",a);
        printf("\n  |                                     |");
        printf("\n  |_____________________________________|\n");
    } else if (a != sqrt(sum)) {
        printf("BRUH, this is not an integer: y^2 =  %lf\n\n\n", sqrt(sum));
    }
    return reverse;
}
int main() {
    int number,originalnum,kalan;
    int reverse = 0;
    printf("Enter a number to see the function shows you the result of 'your number' + 'reverse of your number' = y^2 | The result of y^2 can be an integer, or not. \n");
    scanf("%d", &number);
    reversefunc(number,originalnum,reverse,kalan);
    int n;
    printf("\nEnter an integer (n): ");
    scanf("%d", &n);
    for (int i = 1 ; i < n ; i ++) {
            number = i;
            int XD = number + reversefunc(number,originalnum,reverse,kalan);
            int karekok = sqrt(XD);
    }
    return 0;
}