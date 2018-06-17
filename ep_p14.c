#include <stdio.h>

//protoypes
unsigned int collatz(unsigned int);

/*
	returns the iterations until '1' is hit, inclusive.
 */
unsigned int collatz(unsigned int x)
{
	printf("Testing %d: ", x);

	unsigned int count = 1; //to count the number we start with

	while(x != 1)
	{
		if(x & 1) //if x is odd
		{
			x *= 3;
			x++;
		}
		else //if x is even
		{
			x = x >> 1; //same as dividing by two
		}
		count++;
	}

	if(x == 1)
	{
		printf("%d steps\n", count);
		return count;
	}

}


int main()
{
	unsigned int result, max = 0, maxNum, i;

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
