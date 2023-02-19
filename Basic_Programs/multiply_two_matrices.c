#include <stdio.h>
int main()
{
    int matrix1_row, matrix1_column, matrix2_row, matrix2_column;
    printf("Enter Row number of matrix 1 : ");
    scanf("%d", &matrix1_row);
    printf("Enter column number of matrix 1 : ");
    scanf("%d", &matrix1_column);
    printf("Enter Row number of matrix 2 : ");
    scanf("%d", &matrix2_row);
    printf("Enter column number of matrix 2 : ");
    scanf("%d", &matrix2_column);
    printf("\n");
    int matrix1[matrix1_row][matrix1_column], matrix2[matrix2_row][matrix2_column];
    for (int i = 0; i < matrix1_row; i++)
    {
        for (int j = 0; j < matrix1_column; j++)
        {
            printf("Enter Integer: matrix 1 [%d] [%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < matrix2_row; i++)
    {
        for (int j = 0; j < matrix2_column; j++)
        {
            printf("Enter Integer: matrix 2 [%d] [%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\n");
    int multiply_matrix[matrix1_row][matrix2_column];
    for (int i = 0; i < matrix1_row; i++)
    {
        for (int j = 0; j < matrix2_column; j++)
        {
            multiply_matrix[i][j] = 0;
            for (int k = 0; k < matrix1_column; k++)
            {
                multiply_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("\n");
    for (int i = 0; i < matrix1_row; i++)
    {
        for (int j = 0; j < matrix2_column; j++)
        {
            printf("After multiplication : matrix [%d] [%d] : %d \n", i, j, multiply_matrix[i][j]);
        }
    }
    return 0;
}