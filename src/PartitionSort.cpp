//
// Created by xiaowei on 2015/4/22.
//

#include "PartitionSort.h"
#include "Test.h"

int tempSize;

PartitionSort::PartitionSort():Sort("PartitionSort") { }

void PartitionSort::merger(int *array, int bottom, int middle, int top) {

    int* vessel = new int[tempSize];
    int i = bottom;
    int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= top) {
        if (array[i] < array[j]) {
            vessel[k] = array[i];
            k++;
            i++;
            addComparement();
            addMovement();
        }
        else {
            vessel[k] = array[j];
            k++;
            j++;
            addComparement();
            addMovement();
        }
    }
    if (i == middle + 1) {
        while (j <= top) {
            vessel[k] = array[j];
            k++;
            j++;
            addMovement();
        }
    }
    else {
        while (i <= middle) {
            vessel[k] = array[i];
            k++;
            i++;
            addMovement();
        }
    }
    for (i = 0, j = bottom; j <= top; i++, j++) {
        array[j] = vessel[i];
        addMovement();
    }

}

void PartitionSort::divide(int *array, int bottom, int top) {
    if (bottom < top) {
        if (bottom + 1 == top) {
            if (array[bottom] > array[top]) {
                int temp = array[top];
                array[top] = array[bottom];
                array[bottom] = temp;
                addMovement();
                addComparement();
            }
        }
        else {
            int middle = (bottom + top) / 2;
            divide(array, bottom, middle);
            divide(array, middle + 1, top);
            merger(array, bottom, middle, top);
        }
    }
}

void PartitionSort::run(int *array, int size) {
    tempSize = size;
    divide(array, 0, size);
}