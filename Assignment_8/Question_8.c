#include<stdio.h>
int main()
{
	int i,j,t;
	for(i=1;i<=4;i++)
	  {
	  	t=1;
	  	 for(j=1;j<=7;j++)
	  	  {
	  	     if(j>=5-i&&j<=3+i)
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
