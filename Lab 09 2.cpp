#include <stdio.h>
int main(){
	int n[10],i,dif;
	printf("Number %d : " ,i+1);
	scanf("%d",&n[i+1]);
	printf("Number %d : " ,i+2);
	scanf("%d",&n[i+2]);
	dif = n[i+2]-n[i+1];
	printf("Difference = %d \n",dif);
	for(i=3;i<=10;i++){
		printf("Number %d: ", i);
		scanf("%d",&n[i]);
		printf("Difference = %d \n", n[i-1]-n[i]);
	}
	return 0;
}
