#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

//实现循环队列
typedef struct CirQueue {
	int* a;
	int size;
	int capacity;

} CQue;

CQue* MyCirQueue(int k ) {
	CQue* pls = (CQue*)malloc( sizeof(CQue));
	pls->a = (int*)malloc((k+1) * sizeof(int));
	return pls;
}
int Front(CQue* pos , int head) {
		return *(pos->a + head);
}
int Rear(CQue*pos , int tear) {
	return *(pos->a + tear)	;
}
bool enQueue() {

}
bool deQueue() {

}
void Empty() {


}
void Full() {


}
int main() {
	CQue* head = NULL;



	return 0;
}