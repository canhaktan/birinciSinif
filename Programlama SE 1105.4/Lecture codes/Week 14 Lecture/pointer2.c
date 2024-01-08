#include<stdio.h>
int main()
{
  
    int a = 5;
    int* ptr = &a;
    int** d_ptr = &ptr;
  
    printf(" Size of normal Pointer: %d \n", sizeof(ptr));
    printf(" Size of Double Pointer: %d \n", sizeof(d_ptr));
  
    return 0;
}
