#include <stdio.h>
int main(){
	int num,num2,acml=0,cont=0;
	do{
		num=num2;
		scanf("%d",&num2);
		cont++,acml+=num2;
	}while(num!=num2);
	printf("total sum-> %d\n",acml);
	printf("number of numbers inputed->%d",cont);
	return 0;
}
