//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int rows, columns, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}