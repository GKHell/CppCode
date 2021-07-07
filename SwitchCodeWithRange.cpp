
#include<iostream>

using namespace std;
int main()
{

	int day;
	std::cout<<"Enter day code : ";
	cin>>day;
	switch(day)
	{
		case 1: printf("Monday\n");break;
		case 2: printf("tuesday\n");break;
		case 3: printf("Wednesday\n");break;
		case 4: printf("Thursday\n");break;
		case 5: printf("Friday\n");break;
		case 6: printf("saturday\n");break;
		case 7: printf("sunday\n");break;
	}

	cout<<"\n-------------------------------------\n";
	int num;

	cout<<"Enter the number : ";
	cin>>num;

	switch(num)
	{
		case 1 ... 10: cout<<" A "<<endl;break;
		case 11 ... 40: cout<<" B "<<endl;break;
		case 41 ... 50: cout<<" C "<<endl;break;
		case 60 ... 70: cout<<" D "<<endl;break;
		case 71 ... 80: cout<<" E "<<endl;break;
		default: cout<<"Error...."<<endl;
	}


}