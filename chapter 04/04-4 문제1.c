#include <stdio.h>

int main(void)
{
	int num1;

	printf("���� �Է�: ");
	scanf("%d", &num1);
	num1 = ~num1;
	num1 = num1 + 1;
	printf("��ȣ�� �ٲ� ���: %d \n", num1);   //  �� �κ��� ����µ� ������� �־���...
	return 0;
}