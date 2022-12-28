#include<stdio.h>
int main()
{
	int i,j,t=0;
	for(i=1;i<=9;i++)
	  {
	  	if(i<=5)
	  	   t++;
	  	else
	  	   t--;
	  	for(j=1;j<=9;j++)
	  	  {
	  	     if(j>=6-t&&j<=4+t)
			   printf("*");
			 else
			   printf(" ");	
		  }
		  printf("\n");
	  }
	return 0;
}
