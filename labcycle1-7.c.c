/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *           Input characters and count no of
			     1)upper case letters
				 2)lower case letters
                 3)digits                                  *
 ****************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{ 
	char a[100];
	int up=0,low=0,dig=0,i=0;
	printf("Enter a string\n");
	gets(a);
	while(a[i]!='\0')
		{
		if(a[i]>='A'&&a[i]<='Z')
		{
			up+=1;
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			low+=1;
		}
		else if(a[i]>='0' &&a[i]<='9')
			{dig+=1;
			}
		i++;
	}
	printf("No of upper case letters:%d \n",up);
	printf(" No of lower case letters:%d \n",low);
	printf("No of digits : %d\n",dig);
  
return 0;
}	

//wow
	
