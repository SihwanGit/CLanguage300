#include<stdio.h>

int main() {
	int i;
	int hap = 0;

	for (i = 1; i <= 10; i++) hap += i;

	printf("1부터 10까지의 합 : %d\n", hap);
	return 0;
}