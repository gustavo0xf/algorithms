#include "merge.h"

void merge(int array[], int first, int mid, int last) {
    int n1 = mid - first + 1;
    int n2 = last - mid;
    int X[n1], Y[n2];

    FORi(n1) X[i] = array[first + i];
    FORj(n2) Y[j] = array[mid + 1 + j];

    int i = 0, j = 0, k = first;

    while (i < n1 && j < n2) {
        if (X[i] <= Y[j]) {
            array[k] = X[i];
            i++;
        } else {
            array[k] = Y[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = X[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = Y[j];
        j++;
        k++;
    }

}
// O(nlog n);
void mergeSort(int array[], int first, int last) {
    if (first < last) {
        int mid = first + (last - first) / 2;
        mergeSort(array, first, mid);
        mergeSort(array, mid + 1, last);
        merge(array, first, mid, last);
    }
}