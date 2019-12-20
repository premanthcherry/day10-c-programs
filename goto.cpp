// even or odd no using goto;
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	printf("\nenter the number: ");
	scanf("%d",&n);
	if(n%2==0)
	goto even;
	else
	goto odd;
	even: printf("even no");exit(0);
	odd:printf("odd no");
 } 
