

#include<stdio.h>

int main()
{

	int a,b;
	char ch;

	printf("Enter the operation : ");
	scanf("%d%c%d",&a,&ch,&b);



	switch(ch)
	{
		case '+' : printf("%d %c %d = %d\n",a,ch,b,a+b);break;
		case '-' : printf("%d %c %d = %d\n",a,ch,b,a-b);break;
		case '*' : printf("%d %c %d = %d\n",a,ch,b,a*b);break;
		case '/' : printf("%d %c %d = %d\n",a,ch,b,a/b);break;
		case '%' : printf("%d %c %d = %d\n",a,ch,b,a%b);break;
		default : printf("invalid operator...");		
	}


}