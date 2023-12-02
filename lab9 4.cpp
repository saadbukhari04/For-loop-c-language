#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n;
	float s1,s2,abc,x;
	srand(time(0));
	printf("Enter a positive non-zero Number :");
	scanf("%d",&n);
	printf("Square Root by direct method is %f\n",sqrt(n));
	srand(time(0));
	s1=rand()%30+1;

	while(1){
		s2=(s1+(n/s1))/2.0;
		abc=abs(s2-s1);
		if(abc<0.00001){
			printf("Square root by indirect method is %f\n",s1);
			break;
		}
		else{
			s1=s2;
		}
	}
	float sqr=sqrt(n);
	printf("Difference is %f",(sqr-s1));
	return 0;
}
