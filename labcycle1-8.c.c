/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *          using a do while loop ,
			Enter a set of values 
			Find average of both +ve and -ve values                              *
 ****************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{ 
	int i=0,n,n1=1,n2=1;
	float a,avg1=0,avg2=0,sum1=0,sum2=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	do
	{
		printf("Enter the element : ");
		scanf("%f",&a);
		if(a>0)
		{
			sum1+=a;
			n1+=1;
		}
		 else if(a<0)
		{
			sum2+=a;
			n2+=1;
		}
		++i;
	}while(i<n);
	if (sum1==0)
		{
		avg1=0;
		avg2=sum2/(n2-1);
		}
	else if(sum2==0)
		{
		avg2=0;
		avg1=sum1/(n1-1);
	}
	else 
	{
	avg1=sum1/(n1-1);
	avg2=sum2/(n2-1);
	}
	printf("The average of +ve nos :%f \n",avg1);
	printf("The average of -ve nos :%f \n",avg2);
	return 0;
}	
	
