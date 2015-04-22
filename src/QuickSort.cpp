//
// Created by xiaowei on 2015/4/22.
//

#include "QuickSort.h"
#include <time.h>
#include <stdlib.h>

QuickSort::QuickSort():Sort("QuickSort") { }

int creatnum(int bottom, int top) {
    int p = 0;
    //rand可以产生0~32767的整数
    p = bottom + rand() % (top - bottom + 1);

    return p;
}

int QuickSort::partition(int *array, int bottom, int top) {
    //采取随机数为标杆的策略
    int randomnum = creatnum(bottom, top);
    int temp = array[randomnum];
    array[randomnum] = array[top];
    array[top] = temp;
    addMovement();

    int middle = array[top];

    int i = bottom;
    int j = bottom - 1;

    for (; i < top; i++) {
        if (array[i] <= middle) {
            j++;
            addComparement();
            if (i != j) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                addMovement();
            }
        }
        addComparement();
    }

    temp = array[j + 1];
    array[j + 1] = array[top];
    array[top] = temp;
    addMovement();


    return (j + 1);

}


void QuickSort::quickSort(int *array, int bottom, int top) {
    if (bottom < top) {
        addComparement();
        int middle = partition(array, bottom, top);
        quickSort(array, bottom, middle - 1);
        quickSort(array, middle + 1, top);
    }
}

void QuickSort::run(int *array, int size) {
    quickSort(array, 0, size);
}
