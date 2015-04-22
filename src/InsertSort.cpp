//
// Created by xiaowei on 2015/4/22.
//

#include "InsertSort.h"

InsertSort::InsertSort():Sort("InsertSort") { }

void InsertSort::insert(int *array, int top, int number) {
    for (int i = 0; i <= top; i++) {
        if (array[i] > number) {
            addComparement();
            for (int j = top + 1; j > i; j--) {
                array[j] = array[j - 1];
                addMovement();
            }
            array[i] = number;
            break;
        }
        addComparement();
    }
}

void InsertSort::realInsert(int *array, int size) {
    for (int i = 0; i < size; i++) {
        insert(array, i, array[i + 1]);
    }
}

void InsertSort::run(int *array, int size) {
    realInsert(array, size);
}