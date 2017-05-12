/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *           C-program to print pattern                        				*
 *       	   1    																*
 *			 1 2															*
 *		   1 2 3
		 1 2 3 4															*
 *           		                                                *
 *              			                                                *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
   	int n,i,j,k;
	printf("Enter a Limit/ Nth term \n");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{	
		for(j=n-1;j>i;j--)
		{	
			printf(" ");	
		}
		for(k=1;k<=i+1;++k)
		{
			printf("%d",k);
	
		}
		
		printf("\n");
	}
	return 0;
	}

