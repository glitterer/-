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
위의 식을 추가시킬 경우 %%로 바꿔야한다.
링크 확인: https://stackoverflow.com/questions/56354205/what-is-the-problem-with-putting-brackets-in-a-printf-code
*/

/* 따라서 다음 코드가 또 다른 답이 된다.

#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;

	printf("(num1 - num2) x (num2 + num3) x (num3 %% num1) \n");
	printf("위의 식에 입력할 정수 3개를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("연산결과: %d ", result);
	return 0;
}


*/