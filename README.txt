class Test //测试类
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


class Sort//排序基类
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


class QuickSort//快速排序类
class QuickSort:public Sort {
public:
    QuickSort();
    int partition(int *array, int bottom, int top);
    void quickSort(int* array, int bottom, int top);
    void run(int* array, int size);
};


class PartitionSort//归并排序类
class PartitionSort:public Sort {
public:
    PartitionSort();
    void merger(int *array, int bottom, int middle, int top);
    void divide(int *array, int bottom, int top);
    void run(int* array, int size);
};


class InsertSort//插入排序类
class InsertSort:public Sort {
public:
    InsertSort();
    void insert(int *array, int top, int number);
    void realInsert(int *array, int size);
    void run(int* array, int size);
};
