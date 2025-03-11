#include<iostream>
using namespace std;
int sushu(int j){
	bool a=true;
	while(a){
		j++;
		bool b=true;    //判断j是不是素数 
		for(int i=2;i*i<=j;i++){
			if(j%i==0){//j不是素数  
				b=false;
				break;
			}
		}
		if(b==true){
			return j;
		}
	}
}
int main(){
	int M,N,i,tmp,num;
	int shuc=1;
	cin>>M>>N;
	i=2;    //用来是算素数 
	num=1; //统计是第几个素数 
	while(1){
		if(num>N){
			return 0;
		}
		if(shuc%10!=1&&num>=M){
			cout<<" ";
		}
		if(shuc!=1&&shuc%10==1&&num>=M){
			cout<<"\n";
		}
		
		if(num>=M){
			cout<<i;
			shuc++;
		} 
		i=sushu(i);
		num++;
	}
	return 0;
}
