#include "bubble.h"

void swap(int *p1, int *p2) {
    int hold = *p1;
    *p1 = *p2;
    *p2 = hold;
}
// O(n²)
void ascendingBubbleSort(int *array, int n) {
    FORm(n, n) {
        if (array[j] > array[j + 1]) {
            swap(&array[j], &array[j + 1]);
        }
    }
}
// O(n²)
void descendingBubbleSort(int *array, int n) {
    FORm(n, n) {
        if (array[j] < array[j + 1]) {
            swap(&array[j], &array[j + 1]);
        }
    }
}