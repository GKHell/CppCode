
#include<iostream>
using namespace std;

void calculate(int a,char c,int b)
{
	switch(c)
	{
		case '+': cout<<a<<" + "<<b<<" = "<<a+b<<endl;break;
		case '-': cout<<a<<" - "<<b<<" = "<<a-b<<endl;break;
		case '*': cout<<a<<" * "<<b<<" = "<<a*b<<endl;break;
		case '/': cout<<a<<" / "<<b<<" = "<<a/b<<endl;break;
		case '%': cout<<a<<" % "<<b<<" = "<<a%b<<endl;break;
		default:cout<<"invalid operation ...."<<endl;
	}
}
int main()
{

	int a,b;
	char c;
	char choice = 'Y';
	do{

		cout<<"Enter expression : ";
		scanf("%d%c%d",&a,&c,&b);//4+6
		calculate(a,c,b);

		cout<<"Enter 'n' or 'N' to exit ... [y/n] : ";
		cin>>choice;

		system("clear"); // cls
	}while(choice != 'N' && choice != 'n');
}