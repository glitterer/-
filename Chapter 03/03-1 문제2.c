#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("(   )  x  (   )  +  (   ) \n");
	printf("���� �Ŀ� ���� ���ڸ� �Է��Ͻÿ�:  ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%d  x  %d  +  %d  =  %d", num1, num2, num3, result);
	return 0;
}