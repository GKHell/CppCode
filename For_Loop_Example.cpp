
#include<iostream>
using namespace std;
int main()
{
	int i=30;

	for(;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
		{
			cout<<"line "<<i<<"\n";
		}
	}
}