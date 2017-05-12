/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Program to check if a no is pallindrome or not                                      *
 *                                                                          *
 *                                            *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    /* TODO: Enter code here */
	int n,rev=0,temp;
	printf("Enter a no:");
	scanf("%d",&n);
	temp=n;
	while (n>0)
		{
		rev=rev*10+n%10;
		n=n/10;
	}  
	if(temp==rev)
		printf(" %d  is a pallindrome",temp);
	else if(temp!=rev)
		printf("%d is not a pallindrome ",temp);
  	return 0;
	
}
