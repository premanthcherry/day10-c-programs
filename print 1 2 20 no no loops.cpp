// printing 1 to 20 numbers without using loops;
#include<stdio.h>
main()
{
	int a=1;
	test:
		{
			printf("%d\n",a);
			a++;
		}
		if(a<=20)
		{
			goto test;
		}
}
