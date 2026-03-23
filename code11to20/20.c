#include<stdio.h>

#define KOREA "대한민국"
#define BOOK "This is a book"


int main() {
	const char* SCHOOR = "나는 축구를 좋아한다.";

	printf("문자열형 상수\tKOREA의 값:\t%s\n", KOREA);
	printf("문자열형 상수\tBOOK의 값:\t%s\n", BOOK);
	printf("문자열형 상수\tSCHOOR의 값:\t%s\n", SCHOOR);
}