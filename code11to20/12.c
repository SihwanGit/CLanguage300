#include<stdio.h>

int main() {
	int i;
	unsigned int j;
	int k;

	i = 4000000000;
	j = 4000000000;
	k = 'b';

	printf("정수형 변수 i의 값은 %u \n", i); //%u는 signed int에도 적용할 수 있다. 이거 오버플로우 안일어남.
	printf("정수형 변수 j의 값은 %u \n", j);
	//%d로 하면 오버플로우 발생, %u로하면 발생하지 않는다.
	// %u는 부호없는 10진수 표현을 의미한다.

	printf("정수형 변수 k의 값은 %d \n", k); //얘는 당연히 98이 출력될 것이다. int type에도 문자를 넣을 수 있다.


	// C언어가 특이한게 이 지점인듯.
	// 변수의 type과 출력형식을 따로 분리한게 신기함. 설령 type이 int더라도 형식 지정자(Format Specifier)로 강제로 unsigned int로 변경할 수 있음.
	// 실제 값이 바뀌는 건 아니지만, 비트를 인식하는 방식을 바꿀 수 있다는 게 특이한 점인듯.

}