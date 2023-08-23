#!/usr/bin/python3
"""defines a function that measures the island perimeter"""


def island_perimeter(grid):
    """returns the perimiter of an island
    0 represents a water zone in the grid
    1 represents a land zone in the grid
    argument:
        grid (list): list of a list of integers representing the island
    return:
        perimeter of the island, described in grid
    """
    wdth = len(grid[0])
    hght = len(grid)
    lim = 0
    size = 0

    for h in range(hght):
        for w in range(wdth):
            if grid[h][w] == 1:
                size += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    lim += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    lim += 1
    return size * 4 - lim * 2
