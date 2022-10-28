#include <stdio.h>
int main(){
	int acml=0,num,cont=0;
	do{
		scanf("%d",&num);
		acml+=num,cont++;
	}while(num!=0);
	printf("sumation is->%d\n",acml);
	printf("numbers of numbers inputed->%d",cont);
	return 0;
}
