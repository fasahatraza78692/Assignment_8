#include<stdio.h>
int main()
{
	int i,j,t;
	for(i=1;i<=4;i++)
	  {
	  	t=1;
	  	 for(j=1;j<=7;j++)
	  	  {
	  	     if(j>=i&&j<=8-i)
			   {
			   	printf("%d",t);
			   	j<4?t++:t--;
			   }
			 else
			   printf(" ");
			  	
		  }
		  
		  printf("\n");
	  }
	   
	return 0;
}
