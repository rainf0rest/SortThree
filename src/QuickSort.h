//
// Created by xiaowei on 2015/4/22.
//

#ifndef UNTITLED_QUICKSORT_H
#define UNTITLED_QUICKSORT_H

#include"Sort.h"

class QuickSort:public Sort {
public:
    QuickSort();
    int partition(int *array, int bottom, int top);
    void quickSort(int* array, int bottom, int top);
    void run(int* array, int size);
};


#endif //UNTITLED_QUICKSORT_H
