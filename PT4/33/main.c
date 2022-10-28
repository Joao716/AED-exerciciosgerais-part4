#include <stdio.h>
int main(){
	int i,cont=0;
	for(i=0;cont<10;i++){
		if((i+1)%2==0){
			printf("%d,",i);
			cont++;
		}
	}
	return 0;
}
