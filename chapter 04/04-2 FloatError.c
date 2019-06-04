#include <stdio.h>

int main(void)
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;   // calculate 100 times in total

	printf("Result to adding 0.1 a hundred times: %f \n", num);
	return 0;
}

// The last decimal number "2" comes out because it is becomes visible and close to 2.
// In reality, the number goes infinitely on and on becuase it is a floating number.