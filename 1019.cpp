#include<iostream>
using namespace std;
int pai(int n){
	int max=0,min=0;
	int a[11]={0};
	int tmp =n;
	while(tmp!=0){
		a[tmp%10]++;
		tmp=tmp/10;	
	}
	for(int i=9;i>=0;i--){
		for(int j=a[i];j>0;j--){
			max=max*10+i;
		}
	}
	if(max<1000&&max>100){
		max=max*10;
	}else if(max<100&&max>9){
		max*=100;
	}else if(max<10){
		max*=1000;
	}
	for(int i=0;i<10;i++){
		for(int j=a[i];j>0;j--){
			min=min*10+i;
		}
	}
	printf("%04d - %04d = %04d\n",max,min,max-min);
	return max-min;
}
int main(){
	int num=0;
	cin>>num;
	if(num ==6174){
		printf("7641 - 1467 = 6174\n");
		
	}
	while(num!=6174){
		if (num % 1111 == 0) { // 如果所有数字相同
			printf("%04d - %04d = %04d\n",num,num,0);
		    
		    return 0;
		}
	
		num=pai(num);
	}
	return 0;
	
}
