#define _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
//´ó¶ÑÊµÏÖ....
void AdjustUp(DataType* pa, int site) {
	assert(pa);
	int parent = (site - 1) / 2;
	while (parent>=0 && pa[site] > pa[parent]) {
		DataType tmp = pa[site];
		pa[site] = pa[parent];
		pa[parent] = tmp;
		site = parent;
		parent = (site - 1) / 2;
	}
	return;
}
void AdjustDown(DataType* hp, int size,int parent) {
	assert(hp);
	int  child = 0;
	child = parent * 2 + 1;
	while (child < size) {
		if (child + 1 < size && hp[child + 1] > hp[child]) {
			child++;
		}
		if (hp[child] > hp[parent]) {
			DataType tmp = hp[child];
			hp[child] = hp[parent];
			hp[parent] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
	return;
}

void HeapInit(HP* hp) {
	assert(hp);
	hp->a = NULL;
	hp->size = 0;
	hp->capacity = 0;
}
void HeapDestory(HP* hp) {
	assert(hp);
	free(hp->a);
	hp->a = NULL;
	hp->capacity = hp->size = 0;
}
void HeapPush(HP* hp, DataType x) {
	assert(hp);
	if (hp->capacity == hp->size) {
		int Newcapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
		DataType* aa = (DataType*)realloc(hp->a,Newcapacity * sizeof(DataType));
		if (aa==NULL) {
			perror("realloc fail");
			return;
		}
		hp->a = aa;
		hp->capacity = Newcapacity;
	}
	hp->a[hp->size] = x;
	hp->size++;
	AdjustUp(hp->a , hp->size-1);
}
void HeapPop(HP* hp) {
	assert(hp);
	int tmp = hp->a[0];
	hp->a[0] = hp->a[hp->size - 1];
	hp->a[hp->size - 1] = tmp;
	hp->size--;
	AdjustDown(hp->a, hp->size,0);

}
int HeapSize(HP* hp) {
	return hp->size;
}
bool HeapEmpty(HP* hp) {
	return hp->size == 0;
}

void HeapSort(int* arr,int size) {
	int tmp = 0;
	for (int i = 1; i < size; i++) {
		AdjustUp(arr, i);
	}
	int end = size - 1;

	while (end > 0) {
		tmp = arr[end];
		arr[end] = arr[0];
		arr[0] = tmp;
		AdjustDown(arr, end, 0);
		end--;
	}

	return;
}


