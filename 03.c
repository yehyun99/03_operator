#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;
	int result;
	printf("input the year:");
	scanf("%d",&y);
	
	
	result=(y%4==0&&y%100!=0)||(y%400==0);
	printf("is the year %d the leap year?:%d",y,result);
	
	
	return 0;
}
