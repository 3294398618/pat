#include<stdio.h>
int main(){
	int tmp=0,num=0;
	scanf("%d",&num);
	tmp=(num%10)*100+(num/10%10)*10+(num/100);
	printf("%d",tmp);
}
