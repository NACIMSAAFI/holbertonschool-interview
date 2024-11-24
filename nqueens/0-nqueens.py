#!/usr/bin/python3
"""
N Queens Solver
Solves the N Queens problem using backtracking
and outputs all possible solutions.
"""

import sys


def print_usage_and_exit():
    """Prints usage message and exits with status 1."""
    print("Usage: nqueens N")
    sys.exit(1)


def validate_input():
    """Validates the input provided to the program."""
    if len(sys.argv) != 2:
        print_usage_and_exit()

    try:
        N = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)

    if N < 4:
        print("N must be at least 4")
        sys.exit(1)

    return N


def is_safe(board, row, col, N):
    """
    Checks if a queen can be placed at board[row][col].
    Ensures no queens in the same column, upper-left diagonal,
    or upper-right diagonal.
    """
    for i in range(row):
        # Check same column
        if board[i] == col:
            return False
        # Check upper-left diagonal
        if board[i] - i == col - row:
            return False
        # Check upper-right diagonal
        if board[i] + i == col + row:
            return False

    return True


def solve_nqueens(row, board, solutions, N):
    """
    Recursively places queens on the board using backtracking.
    Stores all solutions in the solutions list.
    """
    if row == N:
        solutions.append([[i, board[i]] for i in range(N)])
        return

    for col in range(N):
        if is_safe(board, row, col, N):
            board[row] = col
            solve_nqueens(row + 1, board, solutions, N)
            # Backtrack
            board[row] = -1


def main():
    """Main function to solve the N Queens problem."""
    N = validate_input()
    board = [-1] * N
    solutions = []

    solve_nqueens(0, board, solutions, N)

    for solution in solutions:
        print(solution)


if __name__ == "__main__":
    main()
