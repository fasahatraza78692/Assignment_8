#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1;i<=4;i++)
	  {
	  	ch='A';
	  	 for(j=1;j<=7;j++)
	  	  {
	  	     if(j>=i&&j<=8-i)
			   {
			   	 printf("%c",ch);
			     j<4?ch++:ch--;
			   }
			 else
			   printf(" ");	
		  }
		  printf("\n");
	  }
	   
	return 0;
}
