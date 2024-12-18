#include <iostream>
#include "max_finder.h"

int findMax(int* arr, int size, int (*compare)(int, int)) {
    if (size <= 0) return -1;

    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (compare(arr[i], maxElement) > 0) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int compare(int a, int b) {
    return a - b;
}

int main() {
    int arr[] = {3, 5, 2, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, size, compare);
    
    std::cout << "Максимальный элемент в массиве: " << maxElement << std::endl;

    return 0;
}
