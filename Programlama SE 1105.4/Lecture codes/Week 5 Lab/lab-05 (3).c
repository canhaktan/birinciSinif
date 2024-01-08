#include <stdio.h>
#include <stdbool.h>

void printOfArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. number = %d\n", i + 1, arr[i]);
    }
}

int sumOfArr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

double meanOfArr(int arr[], int size) {
    return (double) sumOfArr(arr, size) / size;
}

bool isElementOf(int num, int arr[], int size) {
    bool result = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            result = true;
            break;
        }
    }
    return result;
}

bool isPrime(int num) {
    bool result = true;
    if (num < 2) {
        result = false;
    } else {
        for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                result = false;
                break;
            }
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    printf("Array elements:\n");
    printOfArr(arr, 5);

    int sum = sumOfArr(arr, 5);
    printf("Sum of array elements: %d\n", sum);

    int size;
    printf("Size of array: ");
    scanf("%d", &size);

    int arr2[size];
    for (int i = 0; i < size; i++) {
        printf("Index of array: %d\n", i);
        printf("Write array element %d: ", i + 1);
        scanf("%d", &arr2[i]);
        printf("\n");
    }
    int mean = meanOfArr(arr2, size);
    printf("Mean of array elements: %d\n", mean);

    int num;
    printf("Write a number to check if it's an element of the array: ");
    scanf("%d", &num);

    bool result;
    result = isElementOf(num, arr2, size);
    if(result){
        printf("%d is in the array.\n", num);
    }else{
        printf("%d isn't in the array.\n", num);
    }

    result = isPrime(num);
    if(result){
        printf("%d is a prime number.\n", num);
    }else{
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
