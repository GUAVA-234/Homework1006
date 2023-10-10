#include <iostream>
#include<stdio.h>

int main()
{
	for (int i = 0; i < 10; i++)printf("*");
	printf("\n");
	for (int o = 0; o < 8; o++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i == 0 || i == 9)printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++)printf("*");

	return 0;
}