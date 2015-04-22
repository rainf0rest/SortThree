#include<iostream>
#include <ctime>
#include <cstdlib>
#include "src/Sort.h"
#include "src/Test.h"
#include "src/InsertSort.h"
#include "src/QuickSort.h"
#include "src/PartitionSort.h"

using namespace std;

void printfx(int* array, int size);

int main() {

    srand(time(0));
    int size;

    cout<<"Please input the size      :  "<<endl;
    cin>>size;

    Test::init(size);

    InsertSort* insertSort = new InsertSort();
    Test testInsertSort(insertSort);
    testInsertSort.run();

    QuickSort* quickSort = new QuickSort();
    Test testQuickSort(quickSort);
    testQuickSort.run();

    PartitionSort* partitionSort = new PartitionSort();
    Test testPartitionSort(partitionSort);
    testPartitionSort.run();
    //debug ustage
    printfx(testInsertSort.getArray(), size);
    printfx(testQuickSort.getArray(), size);
    printfx(testPartitionSort.getArray(), size);

}

void printfx(int* array, int size){
    for (int i = 0; i < size ; i++) {
        cout << array[i] << "   ";
    }
    cout<<endl;
}