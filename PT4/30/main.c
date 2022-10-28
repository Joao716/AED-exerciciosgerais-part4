#include <stdio.h>
int main(){
	unsigned int num;
	printf("choose a number\n");
	scanf("%i",&num);
	int i;
	for(i=1;i<11;i++){
		printf("%d x %d = %d\n",i,num,i*num);
	}
	return 0;
}
