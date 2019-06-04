#include <stdio.h>

//CPU에 따라서 오른쪽으로 움직일 때는 1이 채워지기도, 0이 채워지기도 한다.

int main(void)
{
	int num = -16;   //  00000000 00000000 00000000 00001111
	printf("2칸 오른쪽 이동의 결과: %d \n", num >> 2);
	printf("3칸 오른쪽 이동의 결과: %d \n", num >> 3);
	return 0;
}