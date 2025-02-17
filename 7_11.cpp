#include<stdio.h>
int main(){
	float x=0;
	scanf("%f",&x);
	if(x<=15){
		printf("%.2f",4*x/3);
	}
	if(x>15) {
		printf("%.2f",2.5*x-17.5);
	}
	return 0;
}
