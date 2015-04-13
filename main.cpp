#include<iostream>
#include <ctime>
#include <cstdlib>
#include "src/Sort.h"
#include "src/Test.h"

using namespace std;

void printfx(int* array, int size);

int main() {

    srand(time(0));
    int array[Test::size] ;

    Test::init(array, Test::size - 1);
    Test::testQuickSort(array, Test::size);

    Test::init(array, Test::size - 1);
    Test::testpartitionSort(array, Test::size);

    Test::init(array, Test::size - 1);
    Test::testInsertSort(array, Test::size);

    printfx(array, Test::size);

    cout << endl;

}

void printfx(int* array, int size){
    for (int i = 0; i < size; i++) {
        cout << array[i] << "   ";
    }
}