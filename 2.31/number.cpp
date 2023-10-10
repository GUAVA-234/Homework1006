#include<stdio.h>



int num,square,cube=0;
int main()
{
	printf("number square cube\n");
	for(int i=0; i<10;i++)
	{
		num++;
		square=num*num;
		cube=square*num;
	if(num<10&&square<10)
	 {
		printf("%d      %d      %d\n",num,square,cube);
	 }
	 else	if(num<10&&square<100)
	 {
		printf("%d      %d     %d\n",num,square,cube);
	 }
	 else if(num==10&&square>10)
	 {
		printf("%d     %d    %d\n",num,square,cube);
	 }
	}
	
	return 0;
}