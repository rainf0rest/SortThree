//
// Created by xiaowei on 2015/4/22.
//

#ifndef UNTITLED_INSERTSORT_H
#define UNTITLED_INSERTSORT_H


#include"Sort.h"

class InsertSort:public Sort {
public:
    InsertSort();
    void insert(int *array, int top, int number);
    void realInsert(int *array, int size);
    void run(int* array, int size);
};


#endif //UNTITLED_INSERTSORT_H
