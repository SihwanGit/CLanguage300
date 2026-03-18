#include<stdio.h>

#define HUNDERD_THOUSAND 100000

const int j = 200000;
//둘다 똑같은 상수지만 const는 데이터타입을 명확히 구별한다는 차이가 있다.

//#define HUNDRED_THOUSAND 100000L 처럼 뒤에 리터럴을 붙여 타입을 명시할 수도 있다.

int main() {

	//HUNDERD_THOUSAND = 100000;
	// j = 200000;

	printf("정수형 상수 HUNDRED_THOUSAND의 값은 %d\n", HUNDERD_THOUSAND);
	printf("정수형 상수 j의 값은 %d\n", j);
}