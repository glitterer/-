#include <stdio.h>

int main(void)
{
	int num1;

	printf("정수 입력: ");
	scanf("%d", &num1);
	num1 = ~num1;
	num1 = num1 + 1;
	printf("부호를 바꾼 결과: %d \n", num1);   //  이 부분을 만드는데 어려움이 있었음...
	return 0;
}