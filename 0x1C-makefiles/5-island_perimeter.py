#!/usr/bin/python3
"""
Function that returns the perimeter of the island
"""


def island_perimeter(grid):
    w = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, r in enumarate(grid):
        for k, n in enumarate(r):
            if n == 1:
                if i == 0 or grid[i - 1][k] != 1:
                    w += 1
                if k == 0 or grid[i][k - 1] !=  1:
                    w += 1
                if k == width or grid[i][k + 1] != 1:
                    w += 1
                if i == length or grid[i + 1][k] != 1:
                    w += 1
    return w
