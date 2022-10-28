#include <stdio.h>
int main(){
	int num;
	do{
		scanf("%d",&num);
	}while(num>=50);
	int i;
	int limit=num%2==0?num/2:num;
	for(i=0;i<limit;i++){
		printf("*");
	}
	return 0;
}
