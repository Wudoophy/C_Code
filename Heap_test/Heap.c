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


