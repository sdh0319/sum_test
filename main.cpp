#include <stdio.h>
#include "sum.h"

int main(){
	int a,b;
	printf("input(a,b):");
	scanf("%d %d", &a,&b);
	int i = sum(a,b);
	printf("%d \n", i);
	return 0;
}
