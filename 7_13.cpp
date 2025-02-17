#include<stdio.h>
int main(){
	float Open,High,Low,Close;
	scanf("%f %f %f %f",&Open,&High,&Low,&Close) ;
	if(Close<Open){
		printf("BW-Solid");
	}
	if(Close>Open){
		printf("R-Hollow");
	}
	if(Close==Open){
		printf("R-Cross");
	}
	if(Low<Close&&Low<Open){
		printf(" with Lower Shadow");
	}

	if(Low<Close&&Low<Open&&High>Close&&High>Open){
		printf(" and Upper Shadow");
		return 0;
	}
	if(High>Close&&High>Open){
		printf(" with Upper Shadow");
	}
}
