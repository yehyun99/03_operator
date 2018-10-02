#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,i;
	printf("input two integers:");
	scanf("%d %d",&a,&b);
	i=a+b;
	printf("+ result is %d\n",i);
	i=a-b;
	printf("- result is %d\n",i);
	i=a*b;
	printf("* result is %d\n",i);
	i=a/b;
	printf("/ result is %d\n",i);
	i=a%b;
	printf("% result is %d\n",i);
	return 0;
}
