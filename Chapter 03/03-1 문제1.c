/*  #include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("������ �� ���� 2�� �Է�: ");
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
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d x %d = %d", num1, num2, num1*num2);
	return 0;
}