#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;

	printf("(num1 - num2) x (num2 + num3) x (num3 %% num1) \n");   //%%�� �ٲ�� �Ѵ�.
	printf("���� �Ŀ� �Է��� ���� 3���� �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("������: %d ", result);
	return 0;
}
