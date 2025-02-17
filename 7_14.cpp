#include<stdio.h>
int main(){
	int n=0,A,B,sum=0;
	scanf("%d %d",&A,&B);
	for(int i=A;i<=B;i++){
		printf("%5d",i);
		sum+=i;
		n++;
		if(n%5==0&&n!=0){
			printf("\n");
		}
	}
	if(n%5!=0){
		printf("\n");
	}
	printf("Sum = %d",sum);
}

