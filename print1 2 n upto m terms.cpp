#include<stdio.h>
main()
{
   int a,b,m,n;
   printf("\n enter no of tables:");
   scanf("%d",&n);
   printf("\n enter no of tables:");
   scanf("%d",&m);
   for(a=1;a<=n;a++)
   {
   	for(b=1;b<=m;b++)
   	{
   	   printf("\n %d X %d=%d",a,b,a*b);	
	}
	printf("\n\n");
   }
}
