#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("(   )  x  (   )  +  (   ) \n");
	printf("위의 식에 더할 숫자를 입력하시오:  ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%d  x  %d  +  %d  =  %d", num1, num2, num3, result);
	return 0;
}