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
    //定义虚函数
    virtual void run(int* , int) = 0;

private:
    //排序算法的名字
    string const name;
    //腾移次数
    long long movement;
    //比较次数
    long long comparement;
};


#endif //_UNTITLED_SORT_H_
