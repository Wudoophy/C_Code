#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int DataType;
typedef struct Heap {
	DataType* a;
	int size;
	int capacity;
}HP;

void AdjustUp(DataType* hp, int site);
void AdjustDown(HP* hp, int site);

void HeapInit(HP* hp);
void HeapDestory(HP* hp);
void HeapPush(HP* hp, DataType x);
void HeapPop(HP* hp);
int HeapSize(HP* hp);
bool HeapEmpty(HP* hp);