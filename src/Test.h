//
// Created by xiaowei on 2015/4/9.
//

#ifndef _UNTITLED_TEST_H_
#define _UNTITLED_TEST_H_


class Test {
public:
    //数组大小
    static const int size = 10;
    //随机初始化数组
    static void init(int* arrayOne, int* arrayTwo, int* arrayThree, int n);
    //test QuickSort
    static void testQuickSort(int* array, int size);
    //test PartitionSort
    static void testPartitionSort(int *array, int size);
    //test InsertSort
    static void testInsertSort(int *array, int size);

};


#endif //_UNTITLED_TEST_H_
