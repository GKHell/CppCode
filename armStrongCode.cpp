

#include<iostream>
using namespace std;
int main()
{

	 /*cout<<"Hello World";*/

	int num,digits=0,rem,armNum=0,temp;


	cout<<"Enter the number : ";
	cin>>num;

	temp = num;
	while(num>0)
	{
			digits++;
			num = num/10;	
	}

	num = temp;
	cout<<"no of digits : "<<digits<<endl;
	cout<<" num : "<<num;

	while(num>0)
	{
		rem = num % 10;
		
	}
}