#include <stdio.h>
#include <stdlib.h>
#define FORi(a) for (int i = 0; i < a; i++)
#define FORm(x, y) for (int i = 0; i < (x); i++) for (int j = 0; j < (y); j++)

int** allocMatrix(int m, int n) {
    int **matrix = (int **) malloc(m * sizeof(int *));
    FORi(m) {
        matrix[i] = (int *) malloc(n * sizeof(int));
    }
    return matrix;
}

void buildMatrix(int **matrix, int m, int n) {
    FORm(m, n) {
        scanf("%d", &matrix[i][j]);
    }
}

void freeMatrix(int **matrix, int m) {
    FORi(m) {
        free(matrix[i]);
    }
    free(matrix);
}

int ascending (int a, int b) {
    return a > b;
}

void swap(int *p1, int *p2) {
    int hold = *p1;
    *p1 = *p2;
    *p2 = hold;
}

void bSort(int **matrix, int m, int n, int (*compare)(int, int)) {
    FORm(m*n - 1, m*n - 1) {
        
        int r1 = j / n;
        int c1 = j % n;
        int r2 = (j + 1) / n;
        int c2 = (j + 1) % n;
        
        if (compare(matrix[r1][c1], matrix[r2][c2])) {
            swap(&matrix[r1][c1], &matrix[r2][c2]);
        }
    }
}

void printMatrix(int **matrix, int m, int n) {
    FORm(m, n) {
        printf("%d ", matrix[i][j]);
        if (j == n - 1) printf("\n");
    }
}

int main() {
    
    int m, n;
    int **matrix;
    
    scanf("%dx%d", &m, &n);
    matrix = allocMatrix(m, n);
    buildMatrix(matrix, m, n);
    bSort(matrix, m, n, ascending);
    printMatrix(matrix, m, n);
    freeMatrix(matrix, m);
    
    return 0;
}
