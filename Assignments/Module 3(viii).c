#include<stdio.h>

void main()
{
	int i,j,k,a=1;
		printf("A)\n");
		printf("===============================\n");
		for(i=1;i<=4;i++)

	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////
	
	
		printf("\n===============================\n");
		printf("B)\n");
		printf("===============================\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
			
    	}
		printf("\n");
	}	
	
	
	////////////////////////////////////////////////////////////////////////////////////////////////
	
	
		printf("\n===============================\n");
		printf("C)\n");
		printf("===============================\n");
		for(i=1;i<=4;i++)
	{
		for(k=1;k<=4-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}