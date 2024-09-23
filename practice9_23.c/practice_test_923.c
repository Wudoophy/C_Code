#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int* slow = nums;
    int* fast = slow + 1;
    int mid = 0, n = 1;
    while (fast != (nums + numsSize)) {
        if ((*fast) == (*slow)) {
            fast++;
        }
        else {
            mid = *fast++;
            *++slow = mid;
            n++;
        }

    }

    return n;

}
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8 };
	int* p = a+2;
	printf("%d", *p);


	return 0;
}