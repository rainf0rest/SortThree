//
// Created by xiaowei on 2015/4/9.
//

#ifndef _UNTITLED_TEST_H_
#define _UNTITLED_TEST_H_


class Test {
public:
    //构造函数
    Test(int i);
    //数组大小
    static const int size = 10;
    //随机初始化数组
    void init(int* arrayOne, int* arrayTwo, int* arrayThree, int n);
    //test QuickSort
    void testQuickSort(int* array, int size);
    //test PartitionSort
    void testPartitionSort(int *array, int size);
    //test InsertSort
    void testInsertSort(int *array, int size);
};


#endif //_UNTITLED_TEST_H_
