//
// Created by xiaowei on 2015/4/5.
//

#ifndef _UNTITLED_SORT_H_
#define _UNTITLED_SORT_H_

#include<string>
using namespace std;

class Sort {
public:
    Sort(string na);
    string getName();
    long long getMovement();
    long long getComparement();
    void addMovement();
    void addComparement();
    //�����麯��
    virtual void run(int* , int) = 0;

private:
    //�����㷨������
    string const name;
    //���ƴ���
    long long movement;
    //�Ƚϴ���
    long long comparement;
};


#endif //_UNTITLED_SORT_H_
