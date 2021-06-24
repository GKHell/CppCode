
#include<iostream>
using namespace std;
#define A 100
int main()
{

	char name[5] = "CODE";
		cout<<"Hello World\t"<<name<<endl;

		#undef A
		#define A 300

		cout<<" A : "<<A<<endl; // A = 300

		const int a = 30;
		// a = 50;  // error
		cout<<"a : "<<a<<endl; // a = 30

		cout<<"hex Data : "<<0X123<<endl;
		/*
				16^2	16^1	1
				--------------------
				256	    16      1
				1        2      3
				-------------------
				 256 + 32 + 3 = 291
		*/
 		cout<<"new line = \\n  \? ";
 		cout<<"hello \"code\" ";

 		("Hello???")?cout<<"Hello World":cout<<"bye friend";
 		
return 'A';	
}