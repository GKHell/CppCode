
#include<stdio.h>

int main()
{

	char ch;
	int i;
	printf("Enter the character : ");
	ch = getchar();

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) 
		printf("character..\n");
	else if(ch>='0' && ch<='9')
		printf("digit...");
	else
		printf("special ...");


	// for(i=0;i<=122;i++)
	// {
	// 	printf("%d : %c \n",i,i );

	// 	if(i%5==0)
	// 		printf("\n");
	// }
}