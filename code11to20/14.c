#include<stdio.h>

int main() {
	int b, j;

	b = 10 > 5;
	j = 10 > 20;
	//C언어는 true는 1, false는 0으로 설정한다. 따라서 b,j는 각각 1,0이 된다.

	printf("논리형 변수 b의 값은 %d\n", b);
	printf("논리형 변수 j의 값은 %d\n", j);

	if (b) printf("10 > 5는 참입니다.\n");
	else printf("10 > 5는 거짓입니다.\n");

	if (j) printf("10 > 20는 참입니다.\n");
	else printf("10 > 20는 거짓입니다.\n");

	if (-1) printf("-1은 참입니다.\n");
	else printf("-1은 거짓입니다.\n");

	if (3) printf("3은 참입니다.\n");
	else printf("3은 거짓입니다.\n");


	//C언어는 0은 false, 그 외의 값들은 전부 true로 판정한다.
	//C++에는 bool타입 변수가 있지만 C에는 없다.


	return 0;
}