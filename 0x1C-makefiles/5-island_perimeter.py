#!/usr/bin/python3
"""calculates the perimeter in the
Island in a grid"""


def island_perimeter(grid):
    """this calculates the perimeter."""
    length = len(grid)
    length2 = len(grid[0])
    per = 0
    for i in range(1, length - 1):
        for a in range(1, length2 - 1):
            if grid[i][a] == 1:
                if grid[i][a - 1] == 0:
                    per += 1
                if grid[i][a + 1] == 0:
                    per += 1
                if grid[i + 1][a] == 0:
                    per += 1
                if grid[i - 1][a] == 0:
                    per += 1

    return per

