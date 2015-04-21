//
// Created by xiaowei on 2015/4/5.
//

#include <stdlib.h>
#include <time.h>
#include "Sort.h"
#include "Test.h"

long long Sort::movement = 0;
long long Sort::comparement = 0;


int Sort::partition(int *array, int bottom, int top) {

    int middle = array[top];

    int i = bottom;
    int j = bottom - 1;

    for (; i < top; i++) {
        if (array[i] <= middle) {
            j++;
            comparement++;
            if (i != j) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                movement++;
            }
        }
        comparement++;
    }

    int temp = array[j + 1];
    array[j + 1] = array[top];
    array[top] = temp;
    movement++;


    return (j + 1);

}


void Sort::quickSort(int *array, int bottom, int top) {
    if (bottom < top) {
        comparement++;
        int middle = partition(array, bottom, top);
        quickSort(array, bottom, middle - 1);
        quickSort(array, middle + 1, top);
    }
}

void Sort::insert(int *array, int top, int number) {
    for (int i = 0; i <= top; i++) {
        if (array[i] > number) {
            comparement++;
            for (int j = top + 1; j > i; j--) {
                array[j] = array[j - 1];
                movement++;
            }
            array[i] = number;
            break;
        }
        comparement++;
    }
}

void Sort::realInsert(int *array, int size) {
    for (int i = 0; i < size; i++) {
        insert(array, i, array[i + 1]);
    }
}

void Sort::merger(int *array, int bottom, int middle, int top) {

    int vessel[Test::size] = {0};
    int i = bottom;
    int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= top) {
        if (array[i] < array[j]) {
            vessel[k] = array[i];
            k++;
            i++;
            comparement++;
            movement++;
        }
        else {
            vessel[k] = array[j];
            k++;
            j++;
            comparement++;
            movement++;
        }
    }
    if (i == middle + 1) {
        while (j <= top) {
            vessel[k] = array[j];
            k++;
            j++;
            movement++;
        }
    }
    else {
        while (i <= middle) {
            vessel[k] = array[i];
            k++;
            i++;
            movement++;
        }
    }
    for (i = 0, j = bottom; j <= top; i++, j++) {
        array[j] = vessel[i];
        movement++;
    }

}

void Sort::divide(int *array, int bottom, int top) {
    if (bottom < top) {
        if (bottom + 1 == top) {
            if (array[bottom] > array[top]) {
                int temp = array[top];
                array[top] = array[bottom];
                array[bottom] = temp;
                movement++;
                comparement++;
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

void Sort::clean() {
    movement = 0;
    comparement = 0;
}