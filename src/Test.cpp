//
// Created by xiaowei on 2015/4/9.
//

#include "Test.h"
#include "Sort.h"
#include <ctime>
#include<iostream>
#include <stdlib.h>
#include <algorithm>


using namespace std;



clock_t start, stop;
double duration;

int Test::size = 0;
int* Test::testData = NULL;

Test::Test(Sort* testSort) {
    sort = testSort;
    array = new int[size];
    copy(testData, testData + size, array);
}

void Test::init(int n) {
    size = n;
    srand((unsigned) time(NULL));
    testData = new int[size];

    for (int i = 0; i < n; i++) {
        testData[i] = (1 + rand() % size);
    }
}

void Test::run() {
    start = clock();
    sort->run(array, size - 1);
    stop = clock();
    duration = ((double)(stop - start) / CLK_TCK);
    cout<<"time use of   "<<sort->getName()<<":  "<<duration<<endl;
    cout<<"comparement               :  "<<sort->getComparement()<<endl;
    cout<<"movement                  :  "<<sort->getMovement()<<endl;
    cout<<"comparement and movement  :  "<<sort->getComparement() + sort->getMovement()<<endl<<endl;

}

int* Test::getArray() {
    return array;
}

