#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

//实现循环队列
//typedef struct CirQueue {
//	int* a;
//	int head;
//	int tear;
//	int capacity;
//
//} CQue;
//
//CQue* MyCirQueue(int k ) {
//	CQue* pls = (CQue*)malloc( sizeof(CQue));
//	pls->a = (int*)malloc((k+1) * sizeof(int));
//	return pls;
//}
//int Front(CQue* pos ) {
//	if (pos->head == pos->tear)
//		return -1;
//	else
//	return *(pos->a + pos->head);
//}
//int Rear(CQue* pos ) {
//	if (pos->head == pos->tear)
//		return -1;
//	else
//	return *(pos->a + pos->tear);
//}
//bool enQueue(CQue* pos,int n) {
//	if (pos->head != ++pos->tear) {
//		int* pls = pos->a + pos->tear++;
//		*pls = n;
//	}
//	else {
//		
//	}
//	return true;
//}
//bool deQueue(CQue*pos) {
//
//
//}
//void Empty() {
//
//
//}
//void Full() {
//
//
//}
//int main() {
//	CQue* head = NULL;
//
//
//
//	return 0;
//}


typedef int DataType;
	struct TreeNode {
	DataType* a;
	struct TreeNode* parent;
	};
	typedef struct Heap {
		DataType* a;
		int szie;
		int capacity;
}Heap;

    void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
        int tail1 = m - 1;
        int tail2 = n - 1;
        int k = m + n - 1;

        while (tail2 >= 0) {
            if (tail1 == -1) {
                nums1[k--] = nums2[tail2--];
            }
            else if (nums1[tail1] > nums2[tail2]) {
                nums1[k--] = nums1[tail1--];
            }
            else {
                nums1[k--] = nums2[tail2--];
            }
        }
    }
    int main() {
        int a[] = { 1,2,3,0,0,0 };
        int b[] = { 2,5,6};
        merge(a, 2, 3, b, 2, 3);
        return 0;
    }