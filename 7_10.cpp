#include<stdio.h>
int main(){
	int H=30;
	int year=0;
	float time=0;
	scanf("%d %f",&year,&time);
	if(year>=5){
		H=50;
	}
	if(time>40){
		printf("%.2f",H*40+H*(time-40)*1.5);
		return 0;
	}
	printf("%.2f",time*H);
}
