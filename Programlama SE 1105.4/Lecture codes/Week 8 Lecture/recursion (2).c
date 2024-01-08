#include <stdio.h>

int factorial_iter(int num) {
    int result = 1;
    while(num > 0) {
        result *= num;
        num--;
    }
    return result;
}

// 5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1! = 5 * 4 * 3 * 2 * 1 * 0!
int factorial_rec(int num) {
    if(num == 0) {
        return 1;
    }
    return num * factorial_rec(num - 1);
}

/*
    -> factorial_rec(5)
        -> factorial_rec(4)
            -> factorial_rec(3)
                -> factorial_rec(2)
                    -> factorial_rec(1)
                        -> factorial_rec(0)
                        <- returns 1
                    <- return 1 * 1 = 1
                <- return 2 * 1 = 2
            <- return 3 * 2 = 6
        <- return 4 * 6 = 24
    <- return 5 * 24 = 120
*/

// fibo(10) = 0 1 1 2 3 5 8 13 21 34 55
int fibonacci_iter(int num) {
    int first = 0, second = 1, temp;
    for(int i = 0; i < num - 1; i++) {
        temp = second;
        second = first + second;
        first = temp;
    }
    return second;
}

// fibo(3) = fibo(2) + fibo(1) = (fibo(1) + fibo(0)) + fibo(1)
int fibonacci_rec(int num) {
    if(num == 0 || num == 1) {
        return num;
    }
    return fibonacci_rec(num - 1) + fibonacci_rec(num - 2);
}


int main() {

    // printf("result = %d\n", factorial_iter(5));
    // printf("result = %d\n", factorial_rec(5));

    printf("10th fibonacci number = %d\n", fibonacci_iter(10));
    printf("10th fibonacci number = %d\n", fibonacci_rec(10));

    return 0;
}