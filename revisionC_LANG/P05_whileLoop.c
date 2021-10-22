
#include<stdio.h>
int main()
{

	int num;
	int f = 1;
	int i=2;

	printf("Enter the number : ");
	scanf("%d",&num);

	while(i<=num/2)
	{
		if(num%i==0)
		{
			f = 0;
			break;
		}
		// printf("...");
		i++;
	}

	if(f)
	{
		printf("%d is prime",num);
	}
	else
	{
		printf("%d is not prime..",num);
	}

}