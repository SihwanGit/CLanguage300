#include<stdio.h>

int main() {
	//주석
	
	int i;				//정수형 변수 i
	int hap = 0;		//정수형 변수 hap

	/* for문은 i를 1씩 증가시키며 총 10번 반복, 그리고 hap에 i값을 누적 */
	for (i = 1; i <= 10; i++) hap += i;

	printf("1부터 10까지의 합 : %d\n", hap);

	return 0;
}