#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s,h,m;
	printf("input the second:");
	scanf("%d",&s);
	
	h=s/3600;
	m=(s%3600)/60;
	
	
	printf("the time for %d second is %d : %d : %d",s,h,m,(s%3600)%60);
	
	return 0;
}
