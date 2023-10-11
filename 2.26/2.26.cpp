#include<stdio.h>

int i,o=0;
int main()
{
	printf("請輸入兩個數字 \n");
	scanf("%d%d",&i,&o);
	if(i%o==0)printf("是倍數");
	else printf("不是倍數");
return 0 ;	
}