#include <stdio.h>
#include "util.h"



void transpose(int matrix[ROW][COL], int transpose[COL][ROW])
{
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            transpose[j][i] = matrix[i][j];
        }

    }
}

void reverseRows(int matrix[ROW][COL], int reverse[ROW][COL])
{
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            reverse[i][COL-1-j] = matrix[i][j];
        }
    }
}

void reverseCols(int matrix[ROW][COL], int reverse[ROW][COL])
{
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            reverse[ROW-1-i][j] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[ROW][COL])
{
    printf("\n");
    for (int i=0; i<ROW; i++)
    {
        printf(" ");
        for(int j=0; j<COL; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void rotate90(int matrix[ROW][COL], int rotated[COL][ROW])
{
    int temp[COL][ROW] = {0};
    transpose(matrix, temp);
    reverseRows(temp, rotated);
}

void rotate180(int matrix[ROW][COL], int rotated[COL][ROW])
{
    int temp[COL][ROW] = {0};
    reverseRows(matrix, temp);
    reverseCols(temp, rotated);
}

void rotate270(int matrix[ROW][COL], int rotated[COL][ROW])
{
    int temp[COL][ROW] = {0};
    transpose(matrix, temp);
    reverseCols(temp, rotated);
}