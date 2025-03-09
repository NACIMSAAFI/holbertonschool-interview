# Island Perimeter

This project involves calculating the perimeter of an island represented in a 2D grid. The grid consists of water (`0`) and land (`1`) cells. The perimeter is calculated based on the assumption that each land cell is a square with a side length of 1, and cells are connected horizontally or vertically (not diagonally).

## Project Structure

- **`0-island_perimeter.py`**: Contains the implementation of the `island_perimeter` function.
- **`0-main.py`**: Example main file to test the functionality of the `island_perimeter` function.

## Function Implemented

### `def island_perimeter(grid):`
- **Description**: Calculates the perimeter of the island described in the grid.
- **Parameters**:
  - `grid`: A 2D list of integers where:
    - `0` represents water.
    - `1` represents land.
- **Returns**: The perimeter of the island as an integer.

## Grid Rules

1. The grid is rectangular, with its width and height not exceeding 100.
2. The grid is completely surrounded by water.
3. There is only one island (or none).
4. The island does not have "lakes" (water inside that isn't connected to the surrounding water).

## Approach

The perimeter of the island is calculated by iterating through each cell in the grid:
- For every land cell (`1`), add 4 to the perimeter (since each cell has 4 sides).
- For every adjacent land cell (left, right, top, or bottom), subtract 1 from the perimeter (since shared sides are not part of the perimeter).