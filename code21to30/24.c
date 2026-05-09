#include<stdio.h>

int main() {

	int x = 1;

	printf("x = %d \n", x++);
	printf("x = %d \n", x++);
	printf("x = %d \n", ++x);
	printf("x = %d \n", x--);
	printf("x = %d \n", x--);
	printf("x = %d \n", --x);

	//1 2 4 4 3 1 이렇게 나와야 성공
}