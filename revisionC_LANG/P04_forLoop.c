

#include<stdio.h>

int main()
{
	int num;
	int f = 1;
	int i=2;

	int start,end;

	printf("Enter start-end : ");
	scanf("%d-%d",&start,&end);

	for(num=start;num<=end;num++)
	{
		i=2;
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
			printf("%d is prime\n",num);
		}
		f=1;
	}

	
}