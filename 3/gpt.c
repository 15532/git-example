#include <stdio.h>

// 定义结构体 Range，用来保存范围的起点和终点
typedef struct {
    int start, end;
} Range;

// Range构造函数被替换为普通的函数，因为C语言不支持构造函数
Range make_range(int s, int e) {
    Range range;
    range.start = s;
    range.end = e;
    return range;
}

// 快速排序的非递归实现
void quick_sort(int arr[], const int len) {
    if (len <= 0) return; // 如果数组长度为0或负数，直接返回
    
    Range r[len]; // 用来存储待处理的范围
    int p = 0; // 栈指针
    
    r[p++] = make_range(0, len - 1); // 初始化，开始排序整个数组
    
    while (p) { // 当栈不为空时循环
        Range range = r[--p]; // 弹出一个区间
        
        if (range.start >= range.end) continue; // 如果区间无效，跳过
        
        int mid = arr[range.end]; // 选择区间的最后一个元素作为基准
        int left = range.start, right = range.end - 1; // 左右指针
        
        // 分区操作
        while (left < right) {
            while (arr[left] < mid && left < right) left++; // 左指针找到第一个大于等于基准的元素
            while (arr[right] >= mid && left < right) right--; // 右指针找到第一个小于基准的元素
            if (left < right) {
                // 交换左右指针处的元素
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }
        
        // 把基准元素放到正确的位置
        if (arr[left] >= arr[range.end]) {
            int temp = arr[left];
            arr[left] = arr[range.end];
            arr[range.end] = temp;
        } else {
            left++;
        }
        
        // 把新的子区间推入栈中
        r[p++] = make_range(range.start, left - 1);
        r[p++] = make_range(left + 1, range.end);
    }
}
// 用来打印数组的辅助函数
void print_array(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 测试函数
int main() {
    int arr[] = {3, 6, 8, 10, 1, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("排序前: ");
    print_array(arr, len);
    
    quick_sort(arr, len);
    
    printf("排序后: ");
    print_array(arr, len);
    
    return 0;
}