#include <stdio.h>

void swap(int *a, int *b) {
	// TODO: Fill
}

void get_stat(double *avg, int *max, int *min, int arr[], int size) {
    // TODO: Fill 
}

int main() {
    int num1 = 3, num2 = 5;

    printf("num1 = %d\t num2 = %d\n", num1, num2);  // The output should be 3, 5
    swap(// TODO: Fill);
    printf("num1 = %d\t num2 = %d\n", num1, num2);  // The output should be 5 ,3

    // ********************************
    printf("-----------------------------\n");
    // ********************************

    int arr2[] = {3, 4, 5, 6};
    int size = 4;
    double avg;
    int max, min;
    
    get_stat(// TODO: Fill);
    printf("Average: %lf\n", avg);  // The output should be 4.5
    printf("Maximum: %d\n", max);   // The output should be 6
    printf("Minimum: %d\n", min);   // The output should be 3

    return 0;
}