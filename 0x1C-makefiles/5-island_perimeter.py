#!/usr/bin/python3
'''
    island parameter
'''
from socket import inet_ntoa


def island_perimeter(grid):
    '''
        grid is a list of list of integers

        Args:
        grid(matrix): input grid

        Desc:perimeter of the grid
        
    '''
    ret = 0
    nrows = len(grid)
    ncols = len(grid[0])
    for i in range(nrows):
        ret += sum(grid[i])*4
        for j in range(ncols):
            if grid[i][j] == 1:
                if j+1<ncols and grid[i][j+1] == 1:
                    ret -= 2
                if i+1<nrows and grid[i+1][j] == 1:
                    ret -= 2
        return ret
