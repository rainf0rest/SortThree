#include<iostream>
#include <ctime>
#include <cstdlib>
#include "src/Sort.h"
#include "src/Test.h"

using namespace std;

void printfx(int* array, int size);

int main() {

    srand(time(0));
    int arrayOne[Test::size] ;
    int arrayTwo[Test::size] ;
    int arrayThree[Test::size];

    cout<<"The size of array         :  "<<Test::size<<endl<<endl;

    Test::init(arrayOne, arrayTwo, arrayThree, Test::size);

    Test::testQuickSort(arrayOne, Test::size);

    Test::testPartitionSort(arrayTwo, Test::size);

    Test::testInsertSort(arrayThree, Test::size);

}

void printfx(int* array, int size){
    for (int i = 0; i < size ; i++) {
        cout << array[i] << "   ";
    }
    cout<<endl;
}