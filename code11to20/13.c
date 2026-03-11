#include<stdio.h>

int main() {

	float f;
	double d1, d2;

	f = 3.141592;
	d1 = 1234567890;
	d2 = 'c';

	printf("실수형 변수 f의 값은 %E\n", f);
	printf("실수형 변수 d1의 값은 %E\n", d1);
	printf("실수형 변수 d2의 값은 %.2lf\n", d2);
	//%E는 유효숫자 지수 표기법으로 실수를 표현
	//%f는 float형, %lf는 double 형 형식 지정자. 다만 printf()에서는 f와 lf를 구분하지 않아도 된다.
	//%f, %lf는 기본적으로 소수점 6자리까지 표기하며 바꾸고 싶다면 %와 f 사이에 .n을 넣으면 된다.


	return 0;
}