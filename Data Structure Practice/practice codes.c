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