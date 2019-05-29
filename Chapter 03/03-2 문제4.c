#include <stdio.h>

int main(void)
{
	int num1, num2;
	
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);
	
	printf("몫: %d, 나머지: %d", num1 / num2, num1%num2);
	return 0;
}