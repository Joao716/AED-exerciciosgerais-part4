#include <stdio.h>
int main(){
	int biggest,smallest,num,limit,acml=0,i;
	do{
		scanf("%d",&limit);
	}while(limit<=0);
	for(i=0;i<limit;i++){
		scanf("%d",&num);
		acml+=num;
		biggest=(num>biggest?num:biggest)*(i>0)+(num)*(i<=0);
		smallest=(num<smallest?num:smallest)*(i>0)+(num)*(i<=0);
	}
	printf("biggest->%d\n",biggest);
	printf("smallest->%d\n",smallest);
	printf("average->%f",(float)((float)acml/(float)limit));
	return 0;
}
