#include <stdio.h>

void clearFrame(int matrix[][10]) {
    for (int i = 0; i < 10; ++i) {
        matrix[0][i] = 0;
    }
    for (int i = 0; i < 9; ++i) {
        matrix[i+1][9] = 0;
    }
    for (int i = 0; i < 9; ++i) {
        matrix[9][8-i] = 0;
    }
    for (int i = 0; i < 8; ++i) {
        matrix[8-i][0] = 0;
    }
}
void sortFrame(int matrix[][10]) {
int temp,frame_of_matrix1D[36];
    for (int i = 0; i < 10; ++i) {
        frame_of_matrix1D[i] = matrix[0][i];
    }
    for (int i = 0; i < 9; ++i) {
        frame_of_matrix1D[10+i] = matrix[i+1][9];
    }
    for (int i = 0; i < 9; ++i) {
        frame_of_matrix1D[19+i] = matrix[9][8-i];
    }
    for (int i = 0; i < 8; ++i) {
        frame_of_matrix1D[28+i] = matrix[8-i][0];
    }
    for (int i = 0; i < 36-1; ++i) {
        for (int j = 0; j < 36-1-i; ++j) {
            if (frame_of_matrix1D[j] > frame_of_matrix1D[j+1]) {
                temp = frame_of_matrix1D[j];
                frame_of_matrix1D[j] = frame_of_matrix1D[j+1];
                frame_of_matrix1D[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        matrix[0][i] = frame_of_matrix1D[i];
    }
    for (int i = 0; i < 9; ++i) {
        matrix[i+1][9] = frame_of_matrix1D[10+i];
    }
    for (int i = 0; i < 9; ++i) {
        matrix[9][8-i] = frame_of_matrix1D[19+i];
    }
    for (int i = 0; i < 8; ++i) {
        matrix[8-i][0] = frame_of_matrix1D[28+i];
    }
}
void sortCol(int matrix[][10], int col) {
    int temp;
    for (int i = 0; i < 10-1; ++i) {
        for (int j = 0; j < 10-1-i; ++j) {
            if (matrix[j][col] > matrix[j+1][col]) {
                temp = matrix[j][col];
                matrix[j][col] = matrix[j+1][col];
                matrix[j+1][col] = temp;
            }
        }
    }
}
void sortRow(int matrix[][10], int row) {
    int temp;
    for (int i = 0; i < 10-1; ++i) {
        for (int j = 0; j < 10-1-i; ++j) {
            if (matrix[row][j] > matrix[row][j+1]) {
                temp = matrix[row][j];
                matrix[row][j] = matrix[row][j+1];
                matrix[row][j+1] = temp;
            }
        }
    }
}
void rotate(int matrix[][10]) {
    int rotate_matrix[10][10];
    printf("Rotate matrix: \n");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            rotate_matrix[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++ ) {
            matrix[j][9-i] = rotate_matrix[i][j];
        }
    }
}
void printMatrix(int matrix[][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%d\t",matrix[i][j]);
            if(j == 9) {
                printf("\n");
            }
        }
    }
}
void readMatrix(int matrix[][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf("%d",&matrix[i][j]);
        }
    }
}
int main() {
    int matrix[10][10];
    readMatrix(matrix);
    printf("Print matrix:\n");
    printMatrix(matrix);
    rotate(matrix);
    printMatrix(matrix);
    sortRow(matrix,3);
    sortRow(matrix,6);
    printf("Sorting 4th and 7th rows matrix:\n");
    printMatrix(matrix);
    sortCol(matrix,1);
    sortCol(matrix,4);
    printf("Sorting 2nd and 5th columns matrix:\n");
    printMatrix(matrix);
    sortFrame(matrix);
    printf("Sorting the frame of matrix:\n");
    printMatrix(matrix);
    clearFrame(matrix);
    printf("Clearing the frame of matrix:\n");
    printMatrix(matrix);
    return 0;
}


