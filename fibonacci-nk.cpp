//============================================================================
// Name        : Fibonacci-series.cpp
// Author      : NK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{

int x0=0,x1=1,fib=0;
int i;

printf("The first six elements of Fibonacci series are \n");
	printf("%d \n", x0);
	printf("%d \n", x1);
for ( i=0;i<4; i++)
{
		fib=x0 + x1;
		printf("%d \n", fib);
	x0=x1;
	x1=fib;

}
}