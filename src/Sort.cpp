//
// Created by xiaowei on 2015/4/5.
//

#include "Sort.h"

Sort::Sort(string na): name(na), movement(0), comparement(0) {
}

string Sort::getName() {
    return name;
}

long long Sort::getMovement() {
    return movement;
}

long long Sort::getComparement() {
    return comparement;
}

void Sort::addComparement() {
    comparement++;
}

void Sort::addMovement() {
    movement++;
}

