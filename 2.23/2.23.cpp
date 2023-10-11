#include<stdio.h>

int i,o,p=0;
int main()
{   
	printf("請輸入3個數\n");
	scanf("%d%d%d",&i,&o,&p);
	if(i>o&&o>p)printf("最大 %d  最小 %d",i ,p);
	if(i>o&&o<p)printf("最大 %d  最小 %d",i ,o);
	if(p>o&&o<i)printf("最大 %d  最小 %d",p ,o);
	if(p>o&&o>i)printf("最大 %d  最小 %d",p ,i);
	if(o>p&&p>i)printf("最大 %d  最小 %d",o ,i);
	if(o>p&&i>p)printf("最大 %d  最小 %d",o ,p);
return 0 ;	
}