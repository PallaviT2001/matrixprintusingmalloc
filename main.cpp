#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 2;

    int *matrix = (int *)malloc(rows*cols* sizeof(int));

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {

            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i*cols+j]);
        }
    }

    printf("\nmatrix elements are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i*cols+j]);
        }
        printf("\n");
    }
    free(matrix);


}

