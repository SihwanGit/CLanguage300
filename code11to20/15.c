#include<stdio.h>
#include<string.h>

int main() {
	char str[] = "대한민국"; //한글은 2byte (유니코드), [] 방식은 할당된 값의 개수로 array size를 조절한다.
	char *j = "I love Korea"; //문자열 상수
	//배열 방식은 변수고, 포인터 방식은 상수다. 변경 가능 여부가 다르다는 것을 주의해라.

	printf("문자열 형 변수 str의 값은 %s\n", str);
	printf("문자열 형 상수 j의 값은 %s\n", j);
	//뒤에 널문자 \0이 삽입되는건 당연히 알고 계시죠?

	return 0;
}
