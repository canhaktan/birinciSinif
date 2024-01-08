#include <stdio.h>
int main(void)
{
int a,b,c;
int *aa,*bb,*cc;
aa = &a;
bb = &b;
cc = &c;
a = 5;
b = 6;
c = 7;
printf("Before modification \n");
printf("a = %d , b = %d , c = %d \n",a,b,c);
//modify values of a , b and c using pointers aa, bb, and cc
//respectively
*aa += 3;
*bb += 3;
*cc += 3;
printf("After modification \n");
printf("a = %d , b = %d , c = %d \n",a,b,c);
//now lets print address of a, b and c
printf("Address of a, b and c \n");
printf("&a = %p , &b = %p , &c = %p \n",aa,bb,cc);

return 0;
}

