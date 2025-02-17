#include<stdio.h>
int main(){
	int start=0,walk=0,end=0;
	int tmp=0;
	scanf("%d %d",&start,&walk);
	tmp=start%100+walk+(start/100)*60;   //¼ÆËã·ÖÖÓÊı
	
	printf("%d%02d",tmp/60,tmp%60);
}
