#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int in1, in2, in3;
	
	
	printf("input 3 integer :");
	scanf("%d %d %d", &in1, &in2, &in3);
	printf("The mean of %d %d %d is : %lf",in1,in2,in3,(double)(in1+in2+in3)/3);
	
	
	
	
	return 0;
}
