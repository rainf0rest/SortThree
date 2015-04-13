//
// Created by xiaowei on 2015/4/9.
//

#include "Test.h"
#include "Sort.h"
#include <ctime>
#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

clock_t start, stop;
double duration;


void Test::init(int *arr, int n) {

    srand((unsigned) time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = (1 + rand() % size);
    }
}

int Sort::creatnum(int bottom, int top) {
    int p = 0;
    //rand���Բ���0~32767������
    p = bottom + rand() % (top - bottom + 1);

    return p;
}


void Test::testQuickSort(int* array, int size) {
    start = clock();
    Sort::quickSort(array, 0, size - 1);
    stop = clock();
    duration = ((double)(stop - start) / CLK_TCK);
    cout<<"time use of QuickSort :  "<<duration<<endl;
}

void Test::testInsertSort(int *array, int size) {
    start = clock();
    Sort::realInsert(array, size - 1);
    stop = clock();
    duration = ((double)(stop - start) / CLK_TCK);
    cout<<"time use of InsertSort :  "<<duration<<endl;
}

void Test::testpartitionSort(int *array, int size) {
    start = clock();
    Sort::divide(array, 0, size - 1);
    stop = clock();
    duration = ((double)(stop - start) / CLK_TCK);
    cout<<"time use of partitionSort :  "<<duration<<endl;
}