#include<stdio.h>

int main() {

	int x = 5, y = 2;

	if (x > 0 && x < 10) printf("0 < x < 10\n");

	if (x < 0 || y == 2) printf("x는 0보다 작고, y는 2다.\n");

	if (!(x > y)) printf("x는 y보다 크지 않습니다.");

	return 0;
}