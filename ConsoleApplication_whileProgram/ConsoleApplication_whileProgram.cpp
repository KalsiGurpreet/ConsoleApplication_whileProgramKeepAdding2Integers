#include<stdio.h>
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	int counter = 0;

	puts("Please enter the number:");
	scanf_s("%d", &num1);
	puts("Please enter the number:");
	scanf_s("%d", &num2);

	sum = num1 + num2;
	sum1 = sum;

	while (num2 != 0)
	{
		counter++;
		puts("Please enter the number again:");
		scanf_s("%d", &num1);
		puts("Please enter the number again:");
		scanf_s("%d", &num2);
		

		if (num1 != 99)
		{
			if (num2 == 0)
			{
				sum2 = num1 + num2;
				printf("The sum1(now) is %d\n", sum1);
				printf("The sum2(now) is %d\n", sum2);
			}
		}
		if (num1 == 99)
		{
			if (num2 == 0)
			{
				sum2 = num1 + num2;
				printf("The sum1(here) is %d\n", sum1);
				printf("The sum2(here) is %d\n", sum2);
			}
		}
		if (num1 == 0)
		{
				printf("The sum1(num1 as 0 here) is %d\n", sum1);
				printf("The sum2(num1 as 0 here) is %d\n", sum2 = 0);
		}
		sum2 = num1 + num2;
		sum1 = sum2;
	}
	if (counter)
	{
		puts("Okay now.");
	}
	else
	{
		printf("The sum1 is %d\n", sum1);
	}

	puts("Finish"); 
	return 0;
}