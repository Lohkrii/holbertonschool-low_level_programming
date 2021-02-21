#!/usr/bin/python3
"""
    Calculates the perimeter of an island in matrix form.
"""

def def island_perimeter(grid):
    """ Calculates the perimeter of 1's in a grid """
    count = 0
    for idx in range(len(grid)):
        for jidx in range(len(grid[idx])):
            if grid[idx][jidx] == 1:
                count += 4
                if idx > 0 and grid[idx -1][jidx] == 1:
                    count -= 
                if jidx > 0 and grid[idx][jidx - 1] == 1:
                    count -= 2
    return count
