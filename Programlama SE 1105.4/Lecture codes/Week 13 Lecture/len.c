/* Fig. 7.21: fig07_21.c
   Copying a string using array notation and pointer notation. */
#include <stdio.h>

int len( char *s1);

int main()
{
   char string1[ 100 ];          /* create array string1 */
   int length;
   
   gets(string1);

   length = len( string1 );
   printf("the lenght is: %d\n",length);

   return 0; /* indicates successful termination */

} /* end main */

//.......Find the length of the array................
int len( char *s1)
{
	int len = 0;
   /* loop through strings */
   for ( ; ( *s1 ) != '\0'; s1++ ) {
      len = len + 1;   /* do nothing in body */
   } /* end for */
   len = len + 1;
   
   return len;
} /* end function copy2 */




