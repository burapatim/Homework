#include<stdio.h>
int main() {
	printf("Enter Number : ");
	int x;
	scanf_s("%d", &x);
	for(int i=2;i<=x;i++){
		for (int y = 2;y <= i;y++) {
			printf("*");
		}
		for (int j = x;j >= i;j--) {
			printf(" ");
			if (j > i) {
				printf(" ");
			}
			else {
				for (int a = 2;a <= i;a++) {
					printf("*");
				}
			}
		}
		printf("\n");
	}
	x = x * 2 - 1;
	for (int i = 1;i <= x;i++) {
		printf("*");
	}
	x = (x-1)/2;
	printf("\n");
	for (int i = 1;i <= x;i++) {
		for (int y = x;y >= i;y--) {
			printf("*");
		}
		for (int j =1;j <= i;j++) {
			printf(" ");
			if (j < i) {
				printf(" ");
			}
			else {
				for (int a = x;a >= i;a--) {
					printf("*");
				}
			}
		}
		
		printf("\n");
	}
	
	return 0;
}