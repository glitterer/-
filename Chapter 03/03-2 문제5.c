#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;
	
	printf("위의 식에 입력할 정수 3개를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("연산결과: %d ", result);
	return 0;
}



/*
printf("(num1 - num2) x (num2 + num3) x (num3 % num1) \n");

위의 식을 추가할 경우 에러가 뜬다.
*/