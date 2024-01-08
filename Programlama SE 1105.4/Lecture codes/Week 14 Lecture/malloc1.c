#include <stdio.h>  
#include <stdlib.h> // use stdlib.h header file to malloc() function  
int main ()  
{  
    int *pt; // declare a pointer of type int  
    // use malloc() function to define the size of block in bytes  
    pt = (int *)malloc(sizeof(int));;  
      
    // use if condition that defines ptr is not equal to null  
    if (pt != NULL)  
    {  
        printf (" Memory is created using the malloc() function ");  
    }  
    else  
    printf (" memory is not created "); 
	
	free(pt); 
    return 0;     
}  
