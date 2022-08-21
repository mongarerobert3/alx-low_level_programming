#!/usr/bin/python3
'''
    island parameter
'''
def island_perimeter(grid):
    '''
        grid is a list of list of integers

        Args:
        grid(matrix): input grid

        Desc:perimeter of the grid
        
    '''
    y = 0
    x = 0
    
    for row in range(1, len(grid) - 1):
            for col in range(1, len(grid[row]) - 1):
                if grid[row][col] == 1:
                    if grid[row][col - 1] == 0:
                        y += 1
                    if grid[row][col + 1] == 0:
                        y += 1
                    if grid[row - 1][col] == 0:
                        x += 1
                    if grid[row + 1][col] == 0:
                        x += 1
    return x + y
