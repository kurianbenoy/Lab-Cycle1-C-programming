/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *           C-program to grade of student                       				*
 *			To print mirror image like:
						1
					 2  3  4
				  5  6  7  8  9
				  5  6  7  8  9
                     2  3  4
             			1
                                                           *
 ****************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
   	int n,i,k,j,p,q,r;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for (i=0;i<n;++i)
		{
		for (j=0;j<n-i-1;++j)
			{
			printf(" ");
			}
		for(k=i*i+1;k<(i+1)*(i+1)+1;++k)
			{
				printf("%d",k);
			}
		printf("\n");
	}
	printf("This is mirror\n");
	for(p=n;p>0;--p)
		{
		for(r=0;r<n-p;++r)
			{
				printf(" ");
			}		
		for(q=(p-1)*(p-1)+1;q<p*p+1;++q)
			{
				printf("%d",q);
			}
			printf("\n");
		}	
return 0;
}	
	
