#ifndef BUBBLE_H
#define BUBBLE_H
#define FORm(a, b) for (int i = 0; i < a - 1; i++) for (int j = 0; j < b - i - 1; j++)

void swap(int *p1, int *p2);
void ascendingBubbleSort(int array[], int n);
void descendingBubbleSort(int array[], int n);

#endif