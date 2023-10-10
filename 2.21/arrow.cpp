#include <stdio.h>
int main(){
for(int i=1;i<=3;i++)
{
		for(int j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(int a=0;a<(i*2)-1;a++)
		{
		  printf("*");
		}
		printf("\n");
}
for(int i= 0 ;i<6;i++)
{
	for(int o=0;o<6;o++)
	{
		if(o==5)printf("*");
		else printf(" ");
	}
	printf("\n");
}
	
	return 0;
}