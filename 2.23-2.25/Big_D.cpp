#include<stdio.h>
int main()
{
		for(int i=0;i<10;i++)
	{
		printf("D");
	}
	printf("\n");
	for(int i=0;i<2;i++)
	{
	
			for(int i=0;i<10;i++)
	{
		if(i==9||i==0)printf("D");
		else printf(" ");
	}
	printf("\n");
	}
			for(int i=0;i<10;i++)
	{
		if(i==8||i==1)printf("D");
		else printf(" ");
	}
	printf("\n");
		for(int i=0;i<10;i++)
	{
		if(i==9||i==0||i==8||i==1||i==2||i==7)printf(" ");
		else printf("D");
	}
	printf("\n");
}