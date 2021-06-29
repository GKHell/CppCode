

#include<iostream>
using namespace std;
int main()
{

	int i = 10;

	//1 increment : 
	cout<<" during post increment : "<<(i++)<<endl; // 10
	cout<<"  after post increment : "<<(i)<<endl; // 11

	cout<<"-----------------------\n";
	cout<<"  during pre increment : "<<(++i)<<endl; //12
	cout<<"   after pre increment : "<<(i)<<endl; //12


	// 2 decrement 
	//1 increment : 
	cout<<"\n\n\n during post decrement : "<<(i--)<<endl; // 12
	cout<<"  after post decrement : "<<(i)<<endl; // 11

	cout<<"-----------------------\n";
	cout<<"  during pre decrement : "<<(--i)<<endl; //10
	cout<<"   after pre decrement : "<<(i)<<endl; //10
}