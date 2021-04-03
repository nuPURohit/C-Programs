#include<stdio.h>
main()
{
	int n,i;
	printf("\nEnter number upto which you wnat to go: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		printf("\n%dx%d=%d",n,i,i*n);
		i++;
	}
}
