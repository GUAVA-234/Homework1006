#include<stdio.h>
void aa()
{
	for(int i=0;i<5;i++)
	{
	if(i==4)printf("*");
	else printf(" ");   
	}
	printf("\n");
}

void ab()
{
	for(int o=0;o<9;o++)
	{
	if (o==5||o==3)printf("*");
	else printf(" ");   
	}
	printf("\n");
}
void ac()
{
	for(int o=0;o<9;o++)
	{
	if (o==6|o==2)printf("*");
	else printf(" ");   
	}
	printf("\n");
}
void ad()
{
	for(int o=0;o<9;o++)
	{
	if (o==7|o==1)printf("*");
	else printf(" ");   
	}
	printf("\n");
}
void ae()
{
	for(int o=0;o<9;o++)
	{
	if (o==8|o==0)printf("*");
	else printf(" ");   
	}
	printf("\n");
}

int main()
{
	aa();
	ab();
	ac();
	ad();
	ae();
	ad();
	ac();
	ab();
	aa();
	
	
	return 0;
}