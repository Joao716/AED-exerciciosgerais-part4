#include <stdio.h>
int main(){
	int i=2,j;
	while(i<=10){
		for(j=1;j<=10;j++){
			printf("%d x %d = %d\n",i,j,j*i);
		}
		i=i%2==0?i+2:i;
	}
	return 0;
}
