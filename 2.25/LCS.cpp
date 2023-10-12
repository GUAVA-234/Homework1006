#include<stdio.h>
void L()
{	
	for(int o=0;o<5;o++)
	{
		printf("*"); 
		printf("\n");
	}
	for(int i=0;i<8;i++)printf("*"); 
	printf("\n");
}
void C()
{
 for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == 0 || i == 7 - 1) {
                printf("*");
            }
            else if (j == 0) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void S()
{
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if ((i == 0 || i == 3 || i == 6) && j < 6) {
                printf("*");
            } else if ((i > 0 && i < 3) && (j == 0)) {
                printf("*");
            } else if ((i > 3 && i < 6) && (j == 5)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
	L();
	C();
	S();
	
	return 0;
}