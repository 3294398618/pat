#include<stdio.h>
int main(){
	int start=0,walk=0;
	int end=0;
	int tmp=0;
	scanf("%d %d",&start,&walk);
	tmp+=start%100;
	tmp+=walk;
	end=start-(start%100);    //¼ÇÂ¼H xx00 
	if(tmp>=0){
		while(tmp>=60){
			tmp-=60;
			end+=100;
		} 
	}
	else{
		while(tmp<0){
			tmp+=60;
			end-=100;
	}
		
	}
	end+=tmp;
	printf("%d",end);
	return 0;
}
