#include <stdio.h>

//protoypes
int collatz(int);

/*
	returns the iterations until '1' is hit, inclusive.
 */
int collatz(int x)
{
	printf("Testing %d: ", x);

	int count = 1; //to count the number we start with

	while(x != 1)
	{
		if(x % 2 == 1) //if x is odd
		{
			x = x * 3;
			x = x + 1;
		}
		else //if x is even
		{
			x = x / 2; //same as dividing by two
		}
	}

	if(x == 1)
	{
		printf("%d steps\n", count);
		return count;
	}

	count++;
}


int main()
{
	int result, max = -1, maxNum, i;

	for(i = 2; i < 1000000; i++) //test all the numbers up to, but not including 1 million
	{
		result = collatz(i);
		if(result > max)
		{
			max = result;
			maxNum = i;
		}
	}

	printf("The max number is %d, with %d numbers in the chain leading to 1.\n", maxNum, max);

	return 0;
}
