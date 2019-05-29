/*  #include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("뺄셈을 할 정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);

	result = num1 - num2;
	printf("%d - %d = %d", &num1, &num2, result);
	return 0;
}
*/

#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d x %d = %d", num1, num2, num1*num2);
	return 0;
}