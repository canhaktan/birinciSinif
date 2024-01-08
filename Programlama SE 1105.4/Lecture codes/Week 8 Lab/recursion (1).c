#include <stdio.h>

int sum_of_arr_rec(int arr[], int size) {
    if(size == 1) {
        return arr[0];
    }
    return arr[size - 1] + sum_of_arr_rec(arr, size - 1);
}

void print_array_reversed_iter(int arr[], int size) {
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_array_reversed_rec(int arr[], int size) {
    if(size == 0) {
        printf("\n");
        return;
    }
    printf("%d ", arr[size - 1]);
    print_array_reversed_rec(arr, size - 1);
}

int find_max_array_iter(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_max_array_rec(int arr[], int size) {
    if(size == 1) {
        return arr[0];
    }
    int max = find_max_array_rec(arr, size - 1);
    if(arr[size - 1] > max) {
        max = arr[size - 1];
    }
    return max;
}

int main() {

    /* int arr[] = {2, 4, 6, 8, 10};

    printf("sum = %d\n", sum_of_arr_rec(arr, 5)); */

    /* int arr[] = {2, 4, 6, 8, 10};

    print_array_reversed_iter(arr, 5);
    print_array_reversed_rec(arr, 5); */

    /* int arr[] = {6, 2, 67, 1, 13};

    printf("max = %d\n", find_max_array_iter(arr, 5));
    printf("max = %d\n", find_max_array_rec(arr, 5)); */

    return 0;
}