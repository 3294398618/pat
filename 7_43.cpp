# include<stdio.h>
int main(){
	int num=0,tmp_1=0,tmp_2=0;
	int end=0; 
	scanf("%d",&num);
	tmp_1=num/16;
	tmp_2=num%16;
	end=tmp_1*10+tmp_2;
	printf("%d",end); 
}
