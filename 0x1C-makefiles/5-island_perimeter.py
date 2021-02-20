#!/usr/bin/python3
""" Islander perimeter """


def island_perimeter(grid):
    """ function that returns the perimeter of the
        island described in grid.

    Conditions:
        - Grid is a list of list of integers.
        - 0 represents a water zone.
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically
          (not diagonally).
        - Grid is rectangular, width and height dont
          exceed 100
        - Grid is completely surrounded by water, and there
          is one island (or nothing).
        - The island doesnt have lakes (water inside that
          isnt connected to the water around the island).
    """
    if len(grid) < 1:
        return 0
    ex_y = len(grid) - 1
    ex_x = len(grid[0]) - 1
    perimeter = 0
    for y in range(ex_y + 1):
        for x in range(ex_x + 1):
            if grid[y][x] == 1:
                '#up'
                if x == 0:
                    perimeter += 1
                elif grid[y][x - 1] == 0:
                    perimeter += 1
                '#down'
                if x == ex_x:
                    perimeter += 1
                elif grid[y][x + 1] == 0:
                    perimeter += 1
                '#left'
                if y == 0:
                    perimeter += 1
                elif grid[y - 1][x] == 0:
                    perimeter += 1
                '#right'
                if y == ex_y:
                    perimeter += 1
                elif grid[y + 1][x] == 0:
                    perimeter += 1
    return perimeter
