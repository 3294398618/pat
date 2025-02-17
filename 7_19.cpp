#include<iostream>
using namespace std;
float FA(float n);
float a3,a2,a1,a0;
int main(){
	float a,b;
	float tmp=0;
	scanf("%f %f %f %f",&a3,&a2,&a1,&a0);
	scanf("%f %f",&a,&b);
	while((b-a)>=0.001){
		tmp=FA((a+b)/2);
		if(tmp==0){
			printf("%.2f",(a+b)/2);
			return 0;
		}
		if(tmp*FA(a)>0){
			a=(a+b)/2;
			continue;
		}
		if(tmp*FA(b)>0){
			b=(a+b)/2;
			continue;
		}
	}
	printf("%.2f",(a+b)/2);
	return 0;
}
float FA(float n){
	float tmp=0;
	
	tmp =a3*n*n*n+a2*n*n+a1*n+a0;
	return tmp;
}
