
#include<stdio.h>

/*

		
*/
int main()
{

	int a=7,b=3;

	/*
		Bitwise : AND &
		    8 4 2 1
		    --- ---
		7 : 0 1 1 1
		3 : 0 0 1 1
			---------
		& : 0 0 1 1 => 3

	
	*/
	printf("%d & %d = %d\n",a,b,a&b);


	/*
		Bitwise : OR |
		    8 4 2 1
		    --- ---
		7 : 0 1 1 1
		3 : 0 0 1 1
			---------
		| : 0 1 1 1 => 7
	
	*/
	printf("%d | %d = %d\n",a,b,a|b);

	/*
		Bitwise : XOR ^
		    8 4 2 1
		    --- ---
		7 : 0 1 1 1
		3 : 0 0 1 1
			---------
		^ : 0 1 0 0  => 4
	
	*/
	printf("%d ^ %d = %d\n",a,b,a^b);

	/*
		c = a*2^b
		  = 7*2^3
		  = 56

	*/

	printf("%d << %d = %d\n",a,b,a<<b);
	a = 24;

	/*
		c = a/2^b
		  = 7/2^3
		  = 0.~

	*/

	printf("%d >> %d = %d\n",a,b,a>>b);

	a = -9;

	/*~

		c= -(a+1)
		 = -(7+1)
		 = -8

	*/

	printf("~%d = %d\n",a,~a);

}