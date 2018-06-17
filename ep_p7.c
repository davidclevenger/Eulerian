#include <stdio.h>
#include <math.h>

//prototypes
int isPrime(int);

int isPrime(int possible)
{
	int i;

	for(i = 2; i <= sqrt(possible); i++)
		if( possible % i == 0)
			return 0;
	
	return 1;
}

int main()
{
	int numPrime = 1;
	int currNum = 1;
	
	while(numPrime <= 10001)
	{
		currNum++;
		if(isPrime(currNum))
			numPrime++;
	}

	printf("%d\n", currNum);

	return 0;
}
