#include <stdio.h>
#include "sort.h"
#define LEN 5
int main()
{
    int arr[LEN] = {124,342,311,34,295};
    printData(arr, LEN, "original array:");
    //冒泡排序--升序
    bubbleSort(arr, LEN);
    printData(arr, LEN, "insert sort:");
    //插入排序--降序
    insertSort(arr, LEN);
    printData(arr, LEN, "insert sort:");
    //归并排序--升序
    mergeSort(arr, 0, LEN - 1);
    printData(arr, LEN, "merge sort:");
    //快速排序--降序
    quickSort(arr, 0, LEN - 1);
    printData(arr, LEN, "quick sort:");
    //计数排序法
    int out[LEN];
    int maxValue = max(arr, LEN);
    countSort(arr, out, LEN, maxValue);
    printData(out, LEN, "count sort:");
    //基数排序法
    int out[LEN];
    radixSort(arr, out, LEN);
    printData(out, LEN, "radix sort:");
    return 0;
}
