#include<stdio.h>
int main()
{
	int i,j,i1,j1;
	for(i=1;i<=3;i++)
	  {
	  	for(j=1;j<=19;j++)
	  	  {
	  	     if((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))
			   printf("*");
			 else
			   printf(" ");	
		  }
		  printf("\n");
	  }
	for(i1=1;i1<=10;i1++)
	  {
	  	for(j1=1;j1<=19;j1++)
	  	  {
	  	     if(j1>=i1&&j1<=20-i1)
			   printf("*");
			 else
			   printf(" ");	
		  }
		  printf("\n");
	  }
	return 0;
}
