//
// Created by xiaowei on 2015/4/9.
//

#ifndef _UNTITLED_TEST_H_
#define _UNTITLED_TEST_H_

#include"Sort.h"

class Test {
public:
    //���캯��
    Test(Sort* testSort);
    //�����ʼ������
    static void init(int n);
    //����������
    void run();
    int* getArray();

private:
    static int size;
    static int* testData;
    Sort* sort;
    int* array;
};


#endif //_UNTITLED_TEST_H_
