#include <stdio.h>
int main(){
	int n,i,k=25;
	printf("K = %d\n",k);
	for(i=1;i<=10;i++){
		printf("Number %d: ",i);
		scanf("%d",&n);
		if(n<k)
			printf("%d is smaller than %d\n",n,k);
		else
			printf("%d is larger than %d\n",n,k);
	}
	return 0;
}
