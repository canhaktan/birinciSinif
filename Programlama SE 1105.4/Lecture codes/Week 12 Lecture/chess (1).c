/* Represent a Chessboard by using 2D array */   
#include <stdio.h>
#define row 8
#define col 8

/* enumeration constants represent game status */
enum Status { EMPTY, ROOK , KNIGHT, BISHOP, QUEEN, KING, PAWN };

void readchess( int chess[][col]); /* function prototype */
void printchess( int chess [][col] );

/* function main begins program execution */
int main()
{ 
   int chess[row][col] = {0};
   
   readchess(chess);
   printchess(chess);
   
   return 0; /* indicates successful termination */

} /* end main */

/* roll dice, calculate sum and display results */
void readchess( int chess [][col] )
{
	for (int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if ((i == 1)||(i == 6)){
				chess[i][j] = PAWN;
			}
			else if ((i == 0)||(i == 7)){
				if ((j == 0)||(j == 7)){
					chess[i][j] = ROOK;
				}
				else if ((j == 1)||(j == 6)){
					chess[i][j] = KNIGHT;
				}
				else if ((j == 2)||(j == 5)){
					chess[i][j] = BISHOP;
				}
				else if (j == 3){
					chess[i][j] = QUEEN;
				}
				else if (j == 4){
					chess[i][j] = KING;
				}
			}
			else {
				chess[i][j] = EMPTY;
			}
		}
	}
}
//......................................
void printchess( int chess [][col] )
{
	int value;
	
     for (int i = 0;i < row; i++) {
        /* And every column */
        for (int j = 0;j < col; j++){
            /* Get the board value */
            value = chess[i][j];

            /* And print the contents */
            if (value == EMPTY) {
                     printf(".");
					 }

            else if (value == KING) {
            	printf("K");
			}        
    
            else if (value == QUEEN) {    
			         printf("Q");
			     }
            else if (value == ROOK) {      
			         printf("R");
			     }
            else if (value == KNIGHT) {
            	 printf("N");
			}  
			else if (value == BISHOP) {
            	 printf("B");
			}  
			else if (value == PAWN) {
            	 printf("P");
			}
			  
          }
          /* At the end of each row, make a new line */
          printf("\n");
     }
} /* end function rollRice */

