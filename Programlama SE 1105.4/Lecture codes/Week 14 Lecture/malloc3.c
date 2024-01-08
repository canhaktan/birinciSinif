#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int num, i, sum = 0;  
    int *ptr;  
    printf (" The number of elements to be entered: \n ");  
    scanf (" %d", &num); // define the no. of element to be entered   
    // use malloc() function to define the size of memory block  
    ptr = (int *)malloc (num * sizeof(int));  
    //p = ptr; // store the base address of ptr in p    
    // validate the string is full or not  
    if (ptr == NULL)  
    {  
        printf (" Memory is not allocated \n");  
        exit(0); // exit from program  
    }  
    else  
    {  
        printf (" Memory is created using the malloc() function \n");  
    }  
    printf ("\n Enter the elements in allocated space: \n");    
    for (i = 0; i < num; i++)  
    {  
        scanf (" %d", ptr+i);  
        sum = sum + *(ptr+i);  
          
    }     
    // print the entered number  
    printf (" Elements are: \n");  
    for (i = 0; i < num; i++)  
    {  
        printf (" \n %d", *(ptr+i));    
    }     
    printf (" \n The addition of stored elements is: %d \n", sum);  
    free (ptr); // use free() function to release the occupy space using malloc() function  
    return 0;      
}  
