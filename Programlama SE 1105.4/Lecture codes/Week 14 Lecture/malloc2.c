#include <stdio.h>  
#include <stdlib.h>   
int main ()  
{  
    // declare the local variables  
    int *ptr, size, i;  
      
    printf (" Enter the allocated size of memory: \n ");  
    scanf (" %d", &size); // get the size of a memory     
    // use malloc() function to define the size of block in bytes  
    ptr = (int *)malloc (size * sizeof(int));    
    // use if condition that defines ptr is not equal to null  
    if (ptr != NULL)  
    {  
        // get an input from the user and print it  
        printf (" Enter numbers from the user:\n ");        
        for ( i = 0; i < size; i++)  
        {  
            scanf (" %d", ptr + i); // stores the numbers from base address of memory 
            //scanf (" %d", &ptr[i]);
			 
        }         
        printf (" Numbers are stores in contiguous memory:\n ");         
        for ( i = 0; i < size; i++)  
        {  
            printf (" \n The number is: %d", *(ptr + i)); // here *(ptr + i) is same as ptr[i]
			//printf (" \n The number is: %d", ptr[i]);  
        }  
        printf (" \n Memory is created using the malloc() function \n"); 
		 
        return 0;  
    }  
    else  
    printf (" memory is not created "); 
	
	free(ptr); 
    return 0;  
}  

