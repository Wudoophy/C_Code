#define _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
int main() {
	HP ph;
	HeapInit(&ph);
	int arr[] = { 44,32,36,77,12,50,60 };
	for (int i = 0; i < 7; i++) {
		HeapPush(&ph, arr[i]);
	}
	return 0;
}
