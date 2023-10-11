#include<stdio.h>
int i=0;
int main()
{
	printf("請輸入1個數\n");
	scanf("%d",&i);
	if (i%2==0) printf("是偶數");
	if (i%2!=0) printf("是奇數");
	return 0;
}
