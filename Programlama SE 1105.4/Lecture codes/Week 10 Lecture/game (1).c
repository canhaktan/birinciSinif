/* A Game of Chance */
// ..............................................
// A player rolls two dice. Each die has six faces. 
// These faces contain 1, 2, 3, 4, 5, and 6 spots. 
// After the dice have come to rest, the sum of the spots on the two upward faces is
// calculated. If the sum is 7 or 11 on the first throw, the player wins. 
// If the sum is 2, 3, or 12 on the first throw (called “craps”), 
// the player loses (i.e., the “house” wins). If the
// sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that sum becomes the player’s
// “point.” To win, you must continue rolling the dice until you “make your point.” The
// player loses by rolling a 7 before making the point.   
   
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contains prototype for function time */

/* enumeration constants represent game status */
enum Status { CONTINUE, WON, LOST };

int rollDice( void ); /* function prototype */

/* function main begins program execution */
int main()
{ 
   int sum;        /* sum of rolled dice */
   int myPoint;    /* point earned */

   enum Status gameStatus; /* can contain CONTINUE, WON, or LOST */

   /* randomize random number generator using current time */
   srand( time( NULL ) );

   sum = rollDice(); /* first roll of the dice */

   /* determine game status based on sum of dice */
   if ((sum == 7)||(sum == 11)){
   	     gameStatus = WON;
   }
    else  if ((sum == 2)||(sum == 3)||(sum == 12)){
   	     gameStatus = LOST;
   }
    else {
    	 gameStatus = CONTINUE;
         myPoint = sum;
         printf( "Point is %d\n", myPoint );
	}     

   /* while game not complete */
   while ( gameStatus == CONTINUE ) {    
      sum = rollDice(); /* roll dice again */

      /* determine game status */
      if ( sum == myPoint ) { /* win by making point */
         gameStatus = WON; /* game over, player won */
      } /* end if */
      else {

         if ( sum == 7 ) { /* lose by rolling 7 */
            gameStatus = LOST; /* game over, player lost */
         } /* end if */
       
      } /* end else */

   } /* end while */

   /* display won or lost message */
   if ( gameStatus == WON ) { /* did player win? */
      printf( "Player wins\n" );
   } /* end if */
   else { /* player lost */ 
      printf( "Player loses\n" );
   } /* end else */

   return 0; /* indicates successful termination */

} /* end main */

/* roll dice, calculate sum and display results */
int rollDice( void )
{
   int die1;    /* first die */
   int die2;    /* second die */
   int workSum; /* sum of dice */

   die1 = 1 + ( rand() % 6 ); /* pick random die1 value */
   die2 = 1 + ( rand() % 6 ); /* pick random die2 value */
   workSum = die1 + die2;     /* sum die1 and die2 */

   /* display results of this roll */
   printf( "Player rolled %d + %d = %d\n", die1, die2, workSum );
   
   return workSum; /* return sum of dice */

} /* end function rollRice */

