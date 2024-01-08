#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*  Problems:
        - The game is not continuous.
        - Randomly placed ships may overlap
        - Many other things upto your imagination
*/

#define SIZE 10         // Board is a square with SIZE*SIZE cells
#define NUM_OF_SHIPS 5  // Number of ships

// Symbols that represent the cells state 
enum Symbol { SHIP = 'S', EMPTY = ' ', HIT = 'X', MISS = 'M' };

// Creating a type definition to rename SIZE*SIZE 2-D arrays as Board
typedef char Board[SIZE][SIZE];

// Initialize the game board with all cells empty
void init_board(Board board) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }
}

// Print the given board
// Hides the ships if you are printing the enemy board
void print_board(Board board, bool is_enemy) {
    printf("   ");
    for(int i = 0; i < SIZE; i++) {
        printf("  %d  ", i + 1);
    }
    printf("\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%c  ", i + 65);
        for(int j = 0; j < SIZE; j++) {
            if(is_enemy) {
                if(board[i][j] == SHIP) {
                    printf("[ %c ]", EMPTY);
                } else {
                    printf("[ %c ]", board[i][j]);
                }
            } else {
                printf("[ %c ]", board[i][j]);
            }
        }
        printf("\n");
    }    
}

// Randomly place the ships on the game board
void fill_board_with_ships(Board board) {
    int ship_size, start_row, start_col, is_vertical;
    for(int i = 0; i < NUM_OF_SHIPS; i++) {
        ship_size = i + 1;
        is_vertical = rand() % 2;
        if(is_vertical) {
            start_row = rand() % (SIZE - ship_size + 1);    
            start_col = rand() % SIZE;
            for(int j = start_row; j < start_row + ship_size; j++) {
                board[j][start_col] = SHIP;
            }
        } else {
            start_row = rand() % SIZE;
            start_col = rand() % (SIZE - ship_size + 1);
            for(int j = start_col; j < start_col + ship_size; j++) {
                board[start_row][j] = SHIP;
            }
        }
    }
}

// Fire a shot at the specified cell on the enemy's game board
void fire(Board enemy_board, int target_row, int target_col) {
    if(enemy_board[target_row][target_col] == SHIP) {
        enemy_board[target_row][target_col] = HIT;
    } else {
        if(enemy_board[target_row][target_col] != HIT) {
            enemy_board[target_row][target_col] = MISS;
        }
    }
}

int main() {
    srand(time(NULL));
    Board my_board;
    Board enemy_board;

    init_board(my_board);
    init_board(enemy_board);
    
    fill_board_with_ships(enemy_board);

    print_board(enemy_board, false);

    fire(enemy_board, 2, 5);
    fire(enemy_board, 4, 6);
    fire(enemy_board, 1, 9);

    print_board(enemy_board, true);

    return 0;
}