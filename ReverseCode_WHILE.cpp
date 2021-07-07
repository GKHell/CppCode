
#include<iostream>
using namespace std;
int main()
{
	int num,rem,rev=0;

	cout<<"Enter the number : ";
	cin>>num;

	while(num>0)
	{
		rem = num % 10;
		rev = rev*10 + rem;
		num = num/10;
		cout<<" reverse : "<<rev<<endl;
	}
	cout<<"\nthe reverse Number : "<<rev<<endl;
}

/*
	rem(=num%10)            rev( = rev*10 + rem)  		num(=num/10) : 6163

		3 						3   						616
		6                       36                          61
		1                       361                         6
		6                       3616                        0


*/