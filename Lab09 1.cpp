#include <stdio.h>
int main(){
	int s,e,i,sq,cu;
	printf("Starting Number: ");
	scanf("%d", &s);
	printf("Ending Number: ");
	scanf("%d", &e);
	printf("Ascending Order = ");
	for(i=s;i<=e;i++)
		printf("%d ",i);
	printf("\n");
	printf("Descending order = ");
	for (i=e;i>=s;i--)
		printf("%d ",i);
	printf("\n");
	printf("Squares = ");
	for(i=s;i<=e;i++)
		printf("%d ",i*i);
	printf("\n");
	printf("Cubes = ");
	for(i=s;i<=e;i++)
		printf("%d ",i*i*i);
	
	return 0;
}
