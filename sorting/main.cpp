#include <iostream>
#include "bubble/bubble.h"
#include "merge/merge.h"

#define FORa(n) for(auto &num : array) cout << num << " "; cout << endl;

using namespace std;

int main(void) {
    int array[] = {77, 21, 10, 5, 23, 30, 9, 32, 43, 320};
    int size = (sizeof(array) / sizeof(array[0]));

    cout << "[*] unsorted array: ";
    FORa(array);
    cout << "[*] array sorted in ascending order (bubble sort): ";
    ascendingBubbleSort(array, size);
    FORa(array)
    cout << "[*] array sorted in descending order (bubble sort): ";
    descendingBubbleSort(array, size);
    FORa(array);
    cout << "[*] array sorted in ascending order (merge sort): ";
    mergeSort(array, 0, size -1);
    FORa(array);

    return 0;
}