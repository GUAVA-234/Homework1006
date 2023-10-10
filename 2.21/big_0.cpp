#include <iostream>
#include<stdio.h>

void aa()
{
		for  (int i = 0; i <6;  i++)
	{
		if (i <3)printf(" ");
		else
		{
			printf("*");
		}
	}
	printf("\n");
	return ;
}
void ab()
{
	for(int f=0;f<9;f++)
	{
	if(f==1||f==7)printf("*");
	else printf(" ");
	}
	printf("\n");
	  return ;
}
void ac()
{
	for(int i=0; i<9;i++)
	{
	  if(i==0||i==8)printf("*");
	  else printf(" ");
	}
	printf("\n");
	return ;
}
int main()
{
	aa();
	ab();
	for(int i=0 ; i<5 ;i++)
	{
		ac();
	}
	ab();
	aa();
	return 0;
}


