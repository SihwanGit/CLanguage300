#include<stdio.h>

int hap(int value); //전방선언

int main() {
	printf("1부터 10까지의 합 : %d\n", hap(10));
	printf("1부터 100까지의 합 : %d\n", hap(100));
	printf("1부터 1000까지의 합 : %d\n", hap(1000));

	return 0;
}

int hap(int value) {
	int i;
	int hap = 0;

	for (i = 1; i <= value; i++) hap += i;

	return hap;
}