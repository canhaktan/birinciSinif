#include <stdio.h>
void pass_by_value(int, int, int);
void pass_by_reference(int* ,int* ,int *);
int main(void)
{
int a,b,c;
int *aa,*bb,*cc;
aa = &a;
bb = &b;
cc = &c;
a = 3;
b = 4;
c = 5;
printf("Before modification \n");
printf("a = %d , b = %d , c = %d \n",a,b,c);
//modify values of a , b and c by using pass_by_value function
pass_by_value(a,b,c);
printf("After modification by pass_by_value function \n");
printf("a = %d , b = %d , c = %d \n",a,b,c);
//modift values of a, b and c by using pass_by_reference function
pass_by_reference(aa,bb,cc);
printf("After modification by pass_by_reference function \n");
printf("a = %d , b = %d , c = %d \n",a,b,c);
//now lets print address of a, b and c
printf("Address of a, b and c \n");
printf("&a = %p , &b = %p , &c = %p \n",aa,bb,cc);

return 0;
}
//................................................
void pass_by_value(int val1,int val2, int val3)
{
val1 += 3;
val2 += 3;
val3 += 3;
}
//....................................................
void pass_by_reference(int *val1,int *val2,int *val3)
{
*val1 += 3;
*val2 += 3;
*val3 += 3;
}

