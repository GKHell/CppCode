
#include<iostream>
using namespace std;
int main()
{
	char data[100];
	char str[100];
	int i,j=0;

	printf("Enter the data : ");
	scanf("%s",data);

	//HelloWorldCode
	for(i=0;data[i];i++)
	{

			if(data[i+1]>='A' && data[i+1]<='Z')
			{
				str[j] = data[i];
				j++;	
				str[j] = ' ';
				j++;

			}
			else
			{
				str[j] = data[i];
				j++;
			}
	}

	str[j]=NULL;
	printf("data : %s\n",data);
	printf(" str : %s\n",str);
}