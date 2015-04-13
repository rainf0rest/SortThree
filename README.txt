class Test //测试类
public:
    //数组大小
    static const int size = 100000;
    //随机初始化数组
    static void init(int* arr, int n);
    //test
    static void testQuickSort(int* array, int size);
    //test
    static void testpartitionSort(int *array, int size);
    //test
    static void testInsertSort(int *array, int size);


class Sort //排序类
public:
    //产生一个在botttom~top的随机数
    static int creatnum(int bottom, int top);
    //快速排序
    static int partition(int *array, int bottom, int top);
    static void quickSort(int* array, int bottom, int top);
    //插入排序
    static void insert(int *array, int top, int number);
    static void realInsert(int *array, int size);
    //归并排序
    static void merger(int *array, int bottom, int middle, int top);
    static void divide(int *array, int bottom, int top);

