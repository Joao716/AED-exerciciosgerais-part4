#include <stdio.h>
int getAbs_difference(int n1,int n2);
int main(){
	int num,num2;
	do{
		num=num2;
		scanf("%d",&num2);
	}while(getAbs_difference(num,num2)!=5);
	return 0;
}
int getAbs_difference(int n1,int n2){
	int result=n1-n2;
	return result*(result>0)+(-result)*(result<0);
}
