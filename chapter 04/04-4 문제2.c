/*

곱하기 연산자와 나누기 연산자를 사용하지 않고 3*8/4를 구하도록 하여라.
비트 연산자를 사용하면 풀 수 있다. 

*/


#include <stdio.h>

int main(void)
{
	int num=3;
	num = num << 3;   // 2의 3제곱 = 8 ...  만큼 곱한다
	num = num >> 2;   // 2의 제곱 = 4 ... 만큼 나눈다
	printf("%d \n", num);
	return 0;
}