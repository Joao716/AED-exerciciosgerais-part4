#include <stdio.h>
int getAbsdifference(int num,int num2);
int main(){
	int x,y,z;
	scanf("%d",&x);
	do{
		scanf("%d",&y);
	}while(x>=y);
	printf("enter the z value\n");
	scanf("%d",&z);
	int array_size=getAbsdifference(x,y);
	int array[array_size];
	int i;
	for(i=x;i<y;i++){
		array[i-x]=i%z==0?i:0;
	}
	int cont=0;
	for(i=0;i<array_size;i++){
		if(array[i]!=0){
			printf("%d,",array[i]);
			cont++;
		}
	}
	printf("\nit's %d in total",cont);
	return 0;
}
int getAbsdifference(int num,int num2){
	int result=num-num2;
	return (result)*(result>0)+(-result)*(result<0);
}
