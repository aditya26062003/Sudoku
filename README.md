# Sudoku Solver

Welcome to the Sudoku Solver project! This simple Sudoku solver is implemented in C, utilizing a backtracking algorithm to efficiently find solutions to Sudoku puzzles.

## Features

- Solves Sudoku puzzles using a backtracking algorithm.
- Provides a clear display of both the original puzzle and its solution in the console.

## Prerequisites

To use the Sudoku Solver, ensure that you have the following:

- C Compiler (e.g., GCC)

## Execution
1. **Input your Sudoku puzzle:**

    - Use '0' to represent empty cells.
    - Enter the numbers row by row.

2. **Press Enter to see the solution.**

## Example

```plaintext
Sudoku Puzzle:
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
------+-------+------
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
------+-------+------
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

Solution:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
```

## Contributing

If you're interested in contributing to this project, please follow the [Contributing Guidelines](CONTRIBUTING.md).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
