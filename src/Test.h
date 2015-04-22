//
// Created by xiaowei on 2015/4/9.
//

#ifndef _UNTITLED_TEST_H_
#define _UNTITLED_TEST_H_

#include"Sort.h"

class Test {
public:
    //构造函数
    Test(Sort* testSort);
    //随机初始化数组
    static void init(int n);
    //测试主函数
    void run();
    int* getArray();

private:
    static int size;
    static int* testData;
    Sort* sort;
    int* array;
};


#endif //_UNTITLED_TEST_H_
