#include<stdio.h>
int main(){
	int H,M;
	scanf("%d:%d",&H,&M);
	if(H==12){
		printf("12:%d PM",M);
		return 0;
	}
	else if(H>12){
		printf("%d:%d PM",(H-12),M);
	} 
	else {
		printf("%d:%d AM",H,M);
	}
	return 0;
}
