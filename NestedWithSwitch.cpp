
#include<iostream>
using namespace std;
int main()
{

	char div;
	int rollno;

	cout<<"Enter info [div-rollno] : ";
	scanf("%c-%d",&div,&rollno);

	switch(div)
	{
		case 'A' : 
					switch(rollno)
					{
						case 1 ... 15 : cout<<"captain america "<<endl;break;
						case 16 ... 35: cout<<"iron man"<<endl;break;
						case 36 ... 50: cout<<"Thor"<<endl;break;
						default : cout<<"avengers "<<endl;
					}break;
		case 'B' :
					switch(rollno)
					{
						case 1 ... 15 : cout<<"Black widow"<<endl;break;
						case 16 ... 35: cout<<"Wanda "<<endl;break;
						case 36 ... 50: cout<<"Loki"<<endl;break;
						default : cout<<"avengers "<<endl;
					}break;
		case 'C' :
					switch(rollno)
					{
						case 1 ... 15 : cout<<"Doctor strange"<<endl;break;
						case 16 ... 35: cout<<"THanos"<<endl;break;
						case 36 ... 50: cout<<"HULK"<<endl;break;
						default : cout<<"avengers "<<endl;
					}break;
	
		default : cout<<"Naat Baar hai to.."<<endl;
		}
}