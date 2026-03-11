#include<stdio.h>

int main() {
	// Visual Studio는 MSVC라는 마이크로소프트 전용 컴파일러를 사용한다.
	// c나 cpp 파일은 컴파일러에 의해 목적 코드로 변환되고, 이는 다시 링커에 의해 exe 파일로 변환된다.
	// 최종적으로 exe 파일을 실행한다.


	int i;
	int hap = 0;

	//i가 없으면 에러
	for (i = 1; i <= 10; i++) hap += i;

	printf("1부터 10까지의 합 : %d\n", hap);

	return 0;
}