#include <stdio.h>

#include "util.h"

int main()
{
    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
    printMatrix(matrix);

    printf("Trans");
    int trans[3][3] = {0};
    transpose(matrix, trans);
    printMatrix(trans);

    printf("Rev Row");
    int reverseRow[3][3] = {0};
    reverseRows(matrix, reverseRow);
    printMatrix(reverseRow);

    printf("Rev Col");
    int reverseCol[3][3] = {0};
    reverseCols(matrix, reverseCol);
    printMatrix(reverseCol);

    printf("Rot 90");
    int rot90[3][3] = {0};
    rotate90(matrix, rot90);
    printMatrix(rot90);

    printf("Rot 180");
    int rot180[3][3] = {0};
    rotate180(matrix, rot180);
    printMatrix(rot180);

    printf("Rot 270");
    int rot270[3][3] = {0};
    rotate270(matrix, rot270);
    printMatrix(rot270);

}