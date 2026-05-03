#include<stdio.h>

int main() {
	int x = 1;
	int y = 2;
	int z, zz;

	z = x + y;

	zz = printf("z의 값은 %d\n", z); //printf는 자신이 몇 바이트를 출력했는지 반환
	// z와 공백, %d, \n가 각각 1바이트고, 한글은 하나당 2바이트니 총 6바이트이므로 총 11byte
	printf("zz의 값은 %d\n", zz);

	return 0;
}