//
// Created by xiaowei on 2015/4/5.
//

#ifndef _UNTITLED_SORT_H_
#define _UNTITLED_SORT_H_


class Sort {
public:
    //����һ����botttom~top�������
    static int creatnum(int bottom, int top);
    //��������
    static int partition(int *array, int bottom, int top);
    static void quickSort(int* array, int bottom, int top);
    //��������
    static void insert(int *array, int top, int number);
    static void realInsert(int *array, int size);
    //�鲢����
    static void merger(int *array, int bottom, int middle, int top);
    static void divide(int *array, int bottom, int top);


};


#endif //_UNTITLED_SORT_H_
