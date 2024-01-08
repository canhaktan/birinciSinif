#include <stdio.h>
void pass_by_reference(int *,int );
void print_1D_array(int*,int );
void print_1D_array_adress(int* ,int );

int main(void)
{
int array[8] = {1,2,3,4,5,6,7,8};
int* array_p;
array_p = array;

printf("Before modification\n");
print_1D_array(array_p,8);
//lets modify the array
pass_by_reference(array_p,8);

printf("After modification\n");
print_1D_array(array_p,8);
//lets print the adresses of the array elements
printf("Addresses of elements of array \n");
print_1D_array_adress(array,8);

return 0;
}
//...................................................
void pass_by_reference(int *pointer,int N)
{
for (int i = 0;i<N;i++)
{
*(pointer+i) += 3;
}
}
//............................................
void print_1D_array(int* array,int N)
{
for (int i = 0;i<N;i++)
{
printf("%d ",*(array+i));
}
printf("\n");
}
//...............................................
void print_1D_array_adress(int* array,int N)
{
for (int i = 0;i<N;i++)
{
printf("%p\n",array+i);
}
printf("\n");
}

