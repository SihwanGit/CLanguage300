#include<stdio.h>

int main() {
	int x = 1;
	int y = 2;
	int z = 3;

	if (x == y) printf("x는 y와 같습니다. \n");
	if (x != y) printf("x는 y와 다릅니다. \n");
	if (x > y) printf("x는 y보다 큽니다. \n");
	if (x < y) printf("x는 y보다 작습니다. \n");
	if (x >= z) printf("x는 z보다 크거나 같습니다. \n");
	if (x <= z) printf("x는 z보다 작거나 같습니다. \n");
	//else if가 아니라 if로 나열되어있어서 만족되는 경우가 전부 출력됨.

	return 0;
}