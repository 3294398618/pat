#include<iostream>
using namespace std;
int main(){
	int tmp=0,N=0;
	scanf("%d",&N);
	while(N!=1){
		tmp++;
		if(N%2==0){
			N=N/2;
			continue;
		}
		else{
			N=(N*3+1)/2;
		}
	}
	printf("%d",tmp);
	return 0;
}
