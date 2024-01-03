#include <stdio.h>

#define SIZE 9

void printGrid(int grid[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", grid[i][j]);
        }
        printf("\n");
    }
}

int isSafe(int grid[SIZE][SIZE], int row, int col, int num) {
    for (int i = 0; i < SIZE; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return 0;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return 0;
            }
        }
    }

    return 1;
}

int solveSudoku(int grid[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (grid[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isSafe(grid, row, col, num)) {
                        grid[row][col] = num;

                        if (solveSudoku(grid)) {
                            return 1;
                        }

                        grid[row][col] = 0;
                    }
                }

                return 0;
            }
        }
    }

    return 1;
}

void inputGrid(int grid[SIZE][SIZE]) {
    printf("Enter the Sudoku puzzle (use 0 for empty cells):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
}

int main() {
    int sudokuGrid[SIZE][SIZE];

    inputGrid(sudokuGrid);

    printf("\nSudoku Puzzle:\n");
    printGrid(sudokuGrid);

    if (solveSudoku(sudokuGrid)) {
        printf("\nSolution:\n");
        printGrid(sudokuGrid);
    } else {
        printf("\nNo solution exists.\n");
    }

    return 0;
}
