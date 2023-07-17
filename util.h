#ifndef UTIL_H
#define UTIL_H

#define ROW 3
#define COL 3

void printMatrix(int matrix[3][3]);

void transpose(int matrix[ROW][COL], int transpose[COL][ROW]);

void reverseRows(int matrix[ROW][COL], int reverse[ROW][COL]);

void reverseCols(int matrix[ROW][COL], int reverse[ROW][COL]);

void rotate90(int matrix[ROW][COL], int rotated[COL][ROW]);

void rotate180(int matrix[ROW][COL], int rotated[COL][ROW]);

void rotate270(int matrix[ROW][COL], int rotated[COL][ROW]);

#endif