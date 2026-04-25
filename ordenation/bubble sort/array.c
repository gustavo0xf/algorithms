#include <stdio.h>

#define SIZE       10
#define FORi(n)    for (int i = 0; i < n; i++)
#define FORm(m, n) for (int i = 0; i < (m); i++) for(int j = 0; j < (n); j++) 

void swap(int *p1, int *p2) {
        int hold = *p1;
        *p1 = *p2;
        *p2 = hold;
}

void bSort(int *array, size_t n) {
        FORm(n, n) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
}

int main(void) {
        int array[SIZE] = {3, 25, 8, 12, 77, 10, 34, 73, 49, 18};
        bSort(array, SIZE);
        FORi(SIZE) {
                printf("%d ", array[i]);
        }
        printf("\n");
        return 0;
}
