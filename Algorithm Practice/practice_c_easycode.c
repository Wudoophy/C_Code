#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//int a, b, c;
	///*scanf("%d %d %d ", &a, &b, &c);*/
	//a = -2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2;
	//b = 1;
	//printf("%d", a / b);


	//水仙花数
	/*int sum, a=0, b=0, c=0;
	for (a = 1; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			for (c = 0; c < 10; c++) {
				int k = 0;
				k = a * a * a + b * b * b + c * c * c;
				sum = a * 100 + b * 10 + c;
				if (k == sum)
					printf("%d ", sum);
			}
		}
	}*/
	//韩信点兵
	/*int n = 11;
	int a, b, c;
	double m = 0.0;
	int i = 0;

	while (scanf("%d %d %d", &a, &b, &c) == 3) {
		i++;
		for (n = 11; n < 100; n++) {
			m = n;
			if ((m - a) / 3 == (n - a) / 3 && (m - b) / 5 == (n - b) / 5 && (m - c) / 7 == (n - c) / 7) {
				printf("Case %d: %d\n ",i, n);
				break;
			}
				
			
		}
		if(n==100)
		printf("Case %d: No answer",i);
	}
	*/
	//倒三角形
	/*int n = 0;
	int a, b, c;
	int k;
	scanf("%d", &n);
	for (int i = n; i>0; i--) {
		k = n - i;
		 if(k < n) {
			for (c=0; c < k; c++)
				printf(" ");
			for (a = 0; a < i; a++)
				printf("*");
			for (b = 0; b < i - 1; b++)
				printf("*");
			printf("\n");
		}
		
	}*/
	//子序列的和
	//int n, m;
	//double k, h;
	//while (scanf("%d %d", &n, &m) == 2&&(n<m)) {
	//	/*if (n > 316) {
	//		printf("%lf\n", 0.00001);
	//		continue;
	//	}*/
	//	double s=0.0;
	//	k = n;
	//	h = m;
	//	k = 1 / (k * k);
	//	h = 1 / (h * h);
	//	s = k + h;
	//	k = n;
	//	
	//	for (double i = 1; i < h - k; i++) {
	//		s += (1 / ((k + i) * (k + i)));
	//	}
	//	if (s >= 0.000001)
	//		printf("%.5lf \n", s);
	//	else
	//		printf("0.00001");
	//}

	
	/*double n = 0.98765432112345678998765432;
	printf("%.99lf", n);*/
	//分数化小数  
	//不会做(* > *)
	

	return 0;
}