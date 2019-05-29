#include <stdio.h>

int main(void)
{
	int num;

	printf("제곱을 할 정수를 입력하시오: ");
	scanf("%d", &num);
	printf("%d의 제곱의 결과: %d \n", num, num*num);
	return 0;
}



/*
#include <stdio.h>

int main(void)
{
	int num1;
	int result;

	printf("제곱을 할 정수를 입력하시오: ");
	scanf("%d", &num1);

	result = num1*num1;
	printf("%d ^ 2 = %d", num1, result);
	return 0;
}
*/