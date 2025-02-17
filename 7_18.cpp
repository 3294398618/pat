#include<iostream>
using namespace std;
int main(){
	int tmp,s,x,c;
	scanf("%d %d %d",&c,&s,&x);
	if(s>c){
		printf("1");
		return 0;
	}
	tmp=(c-s)/(s-x)*2+1;
	if((c-s)%(s-x)!=0){
		tmp+=2;
	}
	printf("%d",tmp);
}
