//
// Created by xiaowei on 2015/4/22.
//

#ifndef UNTITLED_PARTITIONSORT_H
#define UNTITLED_PARTITIONSORT_H

#include"Sort.h"

class PartitionSort:public Sort {
public:
    PartitionSort();
    void merger(int *array, int bottom, int middle, int top);
    void divide(int *array, int bottom, int top);
    void run(int* array, int size);
};


#endif //UNTITLED_PARTITIONSORT_H
